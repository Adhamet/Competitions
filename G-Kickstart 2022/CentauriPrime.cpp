#include <iostream>
#include <string>
using namespace std;

bool isVowel(string TEMP);

int main()
{
 int testcases;
 string temp;
 cin >> testcases;
 for (int i = 1; i<=testcases ;i++)
 {
     cin >> temp;
     int k = temp.length()-1;
     if ( isVowel(temp) )
     {
         cout << "Case #" << i << ": " << temp << " is ruled by Alice." << endl;
     }
     else if ( temp[k] != 'y' && temp[k] != 'Y' )
     {
         cout << "Case #" << i << ": " << temp << " is ruled by Bob." << endl;
     }
     else { cout << "Case #" << i << ": " << temp << " is ruled by nobody." << endl; }
 }
}

bool isVowel(string TEMP)
{
    int j = TEMP.length()-1;
    if ( TEMP[j] == 'a' || TEMP[j] == 'e' || TEMP[j] == 'i' || TEMP[j] == 'o' || TEMP[j] == 'u' || TEMP[j] == 'A' || TEMP[j] == 'E' || TEMP[j] == 'I' || TEMP[j] == 'O' || TEMP[j] == 'U' )
    {
        return true;
    }
    else return false;
}
