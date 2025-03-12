/*n= 3
A B C 
A B C 
A B C */

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    // int j;
    cout << "enter ";
    cin >> n;
    // for (i = 1; i <= n; i++)  //using j as int
    // {                         
    //     char ch = 'A';
    //     for (j = 1; j <= n; j++)
    //     {
    //         cout << ch << " ";
    //         // ch=ch+1;
    //         ch++;
    //     }
    //     cout << endl;
    // }

    char j;
    for (i = 1; i <= n; i++)   //using j as char
    {                          //or printing using a char in iteration
        for (j = 'A'; j <'A'+n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}