#include <iostream>
using namespace std;

int main()
{
    int TESTCASE, Nbag, Mstudent, NcandyIn;
    
    cin >> TESTCASE;
    for (int j = 1; j<=TESTCASE; j++)
    {
        cin >> Nbag >> Mstudent;
        unsigned int remainder=0;
        for(int i = 0; i<Nbag; i++)
        {
            cin >> NcandyIn;
            remainder += NcandyIn;
        }
        cout << "Case #" << j << ": " << remainder % Mstudent << "\n";
    }
}