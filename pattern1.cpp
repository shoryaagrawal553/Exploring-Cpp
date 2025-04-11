/* This program generates a symmetric star pattern based on the input value 'n'.
   The pattern consists of two parts: the upper triangle and the lower triangle.
   Example for input 4:
   * * * * * * * * 
   * * *     * * *
   * *         * *
   *             *
   *             *
   * *         * *
   * * *     * * * 
   * * * * * * * *
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, j2, j3;

    // Prompt the user to enter the size of the pattern
    cout << "Enter the size of the pattern: ";
    cin >> n;

    // Upper triangle of the pattern
    for(i = 1; i <= n; i++)
    {
        // Print stars in decreasing order
        for(j = i; j <= n; j++) 
        {
            cout << "* ";
        }

        // Print spaces in increasing order
        for(j2 = 1; j2 <= (i * 2) - 2; j2++) 
        {
            cout << "  ";
        }

        // Print stars in decreasing order
        for(j3 = i; j3 <= n; j3++)
        {
            cout << "* ";
        }

        cout << endl; // Move to the next line after completing a row
    }

    // Lower triangle of the pattern
    for(i = 1; i <= n; i++)
    {
        // Print stars in increasing order
        for(j = 1; j <= i; j++) 
        {
            cout << "* ";
        }

        // Print spaces in decreasing order
        for(j2 = 1; j2 <= (2 * n) - (2 * i); j2++) 
        {
            cout << "  ";
        }

        // Print stars in increasing order
        for(j = 1; j <= i; j++) 
        {
            cout << "* ";
        }

        cout << endl; // Move to the next line after completing a row
    }

    // Alternative implementation of the same pattern using a different logic
    int row, col;
    cout << "Enter the input for alternative pattern: ";
    cin >> n;

    // Upper triangle of the pattern
    for(row = n; row >= 1; row--)
    {
        // Print stars in decreasing order
        for(col = 1; col <= row; col++) 
        {
            cout << "* ";
        }

        // Print spaces
        for(col = 1; col <= 2 * n - 2 * row; col++) 
        {
            cout << "  ";
        }

        // Print stars in decreasing order
        for(col = 1; col <= row; col++) 
        {
            cout << "* ";
        }

        cout << endl; // Move to the next line after completing a row
    }

    // Lower triangle of the pattern
    for(row = 1; row <= n; row++)
    {
        // Print stars in increasing order
        for(col = 1; col <= row; col++) 
        {
            cout << "* ";
        }

        // Print spaces
        for(col = 1; col <= 2 * n - 2 * row; col++) 
        {
            cout << "  ";
        }

        // Print stars in increasing order
        for(col = 1; col <= row; col++) 
        {
            cout << "* ";
        }

        cout << endl; // Move to the next line after completing a row
    }

    return 0; // End of the program
}
