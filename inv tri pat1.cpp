/*enter 4
A A A A 
  B B B 
    C C 
      D   */

#include <iostream>
using namespace std; 

int main()
{
    int n, i, j;  // Variable declaration
    cout << "enter ";  // Prompt user to enter a number
    cin >> n;  // Read the number

    //char ch = 'A'; // Initialize character 'ch' to 'A' (unused in this implementation)

    for (i = 1; i <= n; i++)  // Outer loop for rows
    {
        for (j = 1; j < i; j++)  // Inner loop for printing spaces
        {
            cout << "  ";  // Print spaces
        }

        for (j = 1; j <= n - i + 1; j++)  // Inner loop for printing characters
        {
            //cout << ch << " ";  // Print character (unused in this implementation)
            cout << char('A' + i - 1) << " ";  // Calculate and print character based on the current row
        }

        cout << endl;  // Move to the next line
        // ch++;  // Increment character (unused in this implementation)
    }
    return 0;  // Return 0 to indicate successful execution
}
