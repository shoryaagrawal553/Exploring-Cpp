/* Pattern generation example:
   For input 4:
       *   
     *   *
   *   *   *
 *   *   *   *
   *   *   *
     *   *
       *   
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "enter "; 
    cin >> n;

    // Loop to print the top half of the pattern (pyramid)
    for (i = 1; i < n; i++) // Runs from 1 to n-1
    {
        // Print spaces (decreasing)
        for (j = i; j < n; j++) // Spaces decrease as i increases
        { 
            cout << "  "; // Prints two spaces per iteration
        }

        // Print stars (increasing)
        for (j = 1; j <= i; j++) // Stars increase as i increases
        {
            cout << "*   "; // Prints a star followed by 3 spaces
        }

        // Move to the next line after each row
        cout << endl;
    }

    // Loop to print the bottom half of the pattern (inverted pyramid)
    for (i = n; i >= 1; i--) // Runs from n to 1
    {
        // Print spaces (increasing)
        for (j = i; j < n; j++) // Spaces increase as i decreases
        { 
            cout << "  "; // Prints two spaces per iteration
        }

        // Print stars (decreasing)
        for (j = 1; j <= i; j++) // Stars decrease as i decreases
        {
            cout << "*   "; // Prints a star followed by 3 spaces
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
