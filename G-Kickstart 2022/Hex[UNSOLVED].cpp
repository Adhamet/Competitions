#include <iostream>
using namespace std;

int main()
{
    int testcases, dimension, red=0, blue=0, dot=0, movesR=0, movesB=0;
    char fst;
    cin >> testcases;
    for (int i = 1; i <= testcases; i++)
    {
        cout << "Case #" << i << ": ";
        cin >> dimension;
        if (dimension == 1)
        {
            cin >> fst;
            if ( fst == 'R' ) { cout << "Red wins" << endl; }
            else if ( fst == 'B' ) { cout << "Blue wins" << endl; }
            else if ( fst == '.' ) { cout << "Nobody wins" << endl;} 
            continue;
        }
        int box[dimension][dimension];
        for (int row=0; row < dimension; row++)
        {
            for (int col=0; col < dimension; col++)
            {
                cin >> box[row][col];
                if (box[row][col] == 'R')
                {
                    movesR++;
                    cout << movesR;
                }
                else if (box[row][col] == 'B')
                {
                    movesB++;
                    cout << movesB;
                }
                else if (box[row][col] == '.')
                {
                    dot++;
                }
            }
        }
        if (movesR > movesB+1 || movesB > movesR+1)
        {
            cout << "Impossible";
            continue;
        }
        for (int col = 0; col < dimension ; col++)
        {
            int row = 0;
            char tempR = ' ';
            if ( col == 0 && box[row][col] == 'R')
            {
                tempR = box[row][col];
            }
            if (tempR == 'R')
            {
                for (int x=0; x < dimension ; x++)
                {
                    if (box[row+1][col-1] == 'R' )
                    {
                        red++;
                        row++;
                        tempR = box[row+1][col-1];
                    }
                    else if (box[row+1][col] == 'R')
                    {
                        red++;
                        row++;
                        tempR = box[row+1][col];
                    }
                    else if (box[row+1][col+1] == 'R')
                    {
                        red++;
                        row++;
                        tempR = box[row+1][col+1];
                    }
                    if ( red == dimension && tempR == 'R' )
                    {
                        cout << "Red wins" << endl;
                    }
                    else if (red > dimension) { cout << "Impossible" << endl; }
                }
            }
        }
        for (int row = 0; row < dimension; row++)
        {
            int col = 0;
            char tempB = ' ';
            if ( row == 0 && box[row][col] == 'B')
            {
                tempB = box[row][col];
            }
            if ( tempB == 'B' )
            {
                for (int y=0; y < dimension ; y++)
                {
                    if (box[row+1][col-1] == 'B' )
                    {
                        blue++;
                        col++;
                        tempB = box[row+1][col-1];
                    }
                    else if (box[row+1][col] == 'B')
                    {
                        blue++;
                        col++;
                        tempB = box[row+1][col];
                    }
                    else if (box[row+1][col+1] == 'B')
                    {
                        blue++;
                        col++;
                        tempB = box[row+1][col+1];
                    }
                    if ( blue == dimension && tempB == 'B' )
                    {
                        cout << "Blue wins" << endl;
                    }
                    else if ( blue > dimension ) { cout << "Impossible" << endl; }
                }
            }
        }
        if (red < dimension && blue < dimension && dimension != 1) { cout << "Nobody wins" << endl; }
        blue = 0; red = 0; dot=0; movesR=0; movesB=0; 
    }
}