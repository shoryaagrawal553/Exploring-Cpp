/* Pattern for n=4
      A 
    A B 
  A B C 
A B C D   
*/

#include<iostream>
using namespace std;

int main()
{
    int n, i, j;

    cout << "Enter the number of rows: ";
    cin >> n;

    // Loop to handle number of rows
    for(i = 1; i <= n; i++)
    {
        // Loop to handle number of spaces
        for(j = 1; j <= n - i; j++)
        {
            cout << "  ";  // print space
        }
        
        // Initialize character 'A' for each row
        char ch = 'A';
        
        // Loop to print characters in each row
        for(j = 1; j <= i; j++)
        {
            cout << ch << " ";  // print character
            ch++;  // move to next character
        }

        cout << endl;  // move to next line after each row
    }

    return 0;
}
