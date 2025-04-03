/* 
This program prints a mirrored right-angled triangle pattern with incremental numbers based on user input.
Example for n = 4:
      1 
    1 2 
  1 2 3 
1 2 3 4
*/

#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    
    // Prompt the user to enter the number of rows for the triangle
    cout << "enter ";
    cin >> n;

    // Loop through each row from 1 to n
    for(i = 1; i <= n; i++)
    {
        // Print spaces to create the mirrored effect
        // The number of spaces is determined by (n - i)
        for(j = 1; j <= n - i; j++)
        {
            cout << "  "; // Print two spaces for alignment
        }

        // Print incremental numbers starting from 1 up to the current row number
        for(j = 1; j <= i; j++)
        {
            cout << j << " "; // Print the number 'j' followed by a space
        }

        // Move to the next line after finishing one row
        cout << endl;
    }

    return 0;
}
