/* The program generates a diamond-shaped pattern based on user input.
   Example for input 4:
   *             * 
   * *         * * 
   * * *     * * * 
   * * * * * * * * 
   * * *     * * * 
   * *         * * 
   *             * 
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "enter "; // Prompt the user for input
    cin >> n;         // Read the number of rows for the top half of the diamond

    // Loop for the top half of the diamond
    for (i = 1; i <= n; i++)
    {
        // Print increasing stars on the left side
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // Print spaces in the middle
        for (j = 1; j <= (2 * n) - (2 * i); j++)
        {
            cout << "  ";
        }

        // Print increasing stars on the right side
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl; // Move to the next row
    }

    // Loop for the bottom half of the diamond
    for (i = n - 1; i >= 1; i--)
    {
        // Print decreasing stars on the left side
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // Print spaces in the middle
        for (j = 1; j <= (2 * n) - (2 * i); j++) // spaces
        {
            cout << "  ";
        }

        // Print decreasing stars on the right side
        for (j = 1; j <= i; j++) // stars
        {
            cout << "* ";
        }

        cout << endl; // Move to the next row
    }
    return 0;
}
