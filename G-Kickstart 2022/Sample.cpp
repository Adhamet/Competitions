#include <iostream>
using namespace std;

int main()
{
    int testcases, Nbag, Mstudent, NcandyIn;
    
    cin >> testcases;
    for (int j = 1; j<=testcases; j++)
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
