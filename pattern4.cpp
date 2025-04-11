/* 
 * Program to print a diamond-shaped pattern based on user input.
 * Example for input '4':
 *       *         
 *     *   *       
 *   *   *   *     
 * *   *   *   *   
 * *   *   *   *   
 *   *   *   *     
 *     *   *       
 *       *         
 */

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter the number of rows for the upper half of the diamond: "; 
    cin >> n;

    // Loop to print the upper half of the diamond
    for (i = 1; i <= n; i++)
    {
        // Print spaces before the stars
        for (j = i; j < n; j++) 
        {
            // For each row, spaces decrease as rows go down
            cout << "  "; 
        }

        // Print stars with spacing
        for (j = 1; j <= i; j++) 
        {
            // Number of stars increases as rows go down
            cout << "*   "; 
        }

        cout << endl; // Move to the next line after each row
    }

    // Loop to print the lower half of the diamond
    for (i = n; i >= 1; i--)
    {
        // Print spaces before the stars
        for (j = i; j < n; j++) 
        {
            // For each row, spaces increase as rows go up
            cout << "  "; 
        }

        // Print stars with spacing
        for (j = 1; j <= i; j++) 
        {
            // Number of stars decreases as rows go up
            cout << "*   "; 
        }

        cout << endl; // Move to the next line after each row
    }

    return 0; // Indicate successful program termination
}
