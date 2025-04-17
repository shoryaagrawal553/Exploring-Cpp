/* 
This program prints a mirrored triangular pattern of numbers based on user input.
Example for input 4:
      1 
    2 1 
  3 2 1 
4 3 2 1
*/

#include<iostream>
using namespace std;

int main()
{
    int n, i, j; // Declare variables to store user input and loop counters

    cout << "enter "; // Prompt user to enter the size of the pattern
    cin >> n; // Read the size of the pattern

    // Outer loop for each row of the pattern
    for (i = 1; i <= n; i++)
    {
        // Inner loop to print spaces for alignment
        for (j = 1; j <= n - i; j++)
        {
            cout << "  "; // Print two spaces to create the required gap
        }

        // Inner loop to print the descending numbers in the row
        for (j = i; j >= 1; j--)
        {
            cout << j << " "; // Print the current number followed by a space
        }

        cout << endl; // Move to the next line after completing a row
    }

    return 0; // Indicate successful execution
}
