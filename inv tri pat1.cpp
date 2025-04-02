/* This program prints an inverted triangular pattern of letters
   Example for n = 4:
   A A A A 
     B B B 
       C C 
         D
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i, j; // Declare variables for the number of rows and loop counters
    cout << "enter "; // Prompt user to enter the number of rows
    cin >> n; // Read the number of rows

    for (i = 1; i <= n; i++) // Loop for each row
    {
        for (j = 1; j < i; j++) // Loop to print leading spaces
        {
            cout << "  "; // Print two spaces for each iteration
        }

        for (j = 1; j <= n - i + 1; j++) // Loop to print characters
        {
            cout << char('A' + i - 1) << " "; // Print the character based on the current row number
        }

        cout << endl; // Move to the next line after each row
    }
    return 0; // Return 0 to indicate successful execution
}
