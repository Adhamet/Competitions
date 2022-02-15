#include <iostream>
using namespace std;

int main()
{
    int testcases, Npapers, Hscore=1, repeat=0;
    cin >> testcases;
    for (int i = 1; i <= testcases; i++)
    {
        cin >> Npapers;
        int list[Npapers];
        for (int j=0; j < Npapers; j++)
        {
            cin >> list[j];
            if ( j == 0 )
            {
                cout << "Case #" << i << ": ";
            }
            for (int k=0; k <= j ; k++)
            {
                if (list[k] >= Hscore+1)
                    {
                        repeat++;
                        if ( repeat >= Hscore+1 )
                        {
                            Hscore++;
                        }
                    }
            }
            repeat = 0;
            cout << Hscore << " ";
        }
        Hscore = 1;
        cout << endl;
    }
}