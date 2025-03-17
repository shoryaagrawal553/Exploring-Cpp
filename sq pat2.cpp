/*
This program generates a square pattern of letters up to the given number of rows.
Example:
n = 3
A B C 
A B C 
A B C
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    // Ask the user for the number of rows
    cout << "enter ";
    cin >> n;

    // Declare j as a character variable
    char j;
    // Loop through each row
    for (i = 1; i <= n; i++) // Using j as a char
    {                        // Printing using a char in iteration
        // Loop through each column in the current row
        for (j = 'A'; j < 'A' + n; j++)
        {
            cout << j << " "; // Print the current character
        }
        cout << endl; // Move to the next line after finishing the current row
    }

    return 0;
}
