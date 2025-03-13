/*  n=3
    1 2 3
    1 2 3
    1 2 3 */

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;

    // Prompt the user to enter the value of n
    cout << "enter ";
    cin >> n; // Read the value of n from user input

    // Loop through rows
    for (i = 1; i <= n; i++)
    {
        // Loop through columns
        for (j = 1; j <= n; j++)
        {
            // Print the value of j
            cout << j << " ";
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
