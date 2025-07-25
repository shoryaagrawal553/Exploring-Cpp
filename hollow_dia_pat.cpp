/*
enter 4
      *       
    *   *       
  *       *     
*           *  
  *       *   
    *   *     
      *     
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables 
    int i, j, n;
    
    // Prompt user to enter the size of the pattern
    cout << "Enter the size of the pattern: ";
    cin >> n;

    // Loop to print the upper half of the hollow diamond pattern
    for(i = 0; i < n; i++)
    {
        // Print leading spaces
        for(j = 1; j <= n - i - 1; j++)
        {
            cout << "  ";
        }
        cout << "* ";
        
        // Print inner spaces
        for(j = 1; j <= i * 2 - 1; j++)
        {
            cout << "  ";
        }

        // Print the second star for all rows except the first
        if(i != 0)
        {
            cout << "* ";
        }

        // Move to the next line
        cout << endl;
    }

    // Loop to print the lower half of the hollow diamond pattern
    for(i = n - 2; i >= 0; i--)
    {
        // Print leading spaces
        for(j = 1; j <= n - i - 1; j++)
        {
            cout << "  ";
        }
        cout << "* ";

        // Print inner spaces
        for(j = 1; j <= i * 2 - 1; j++)
        {
            cout << "  ";
        }

        // Print the second star for all rows except the last
        if(i != 0)
        {
            cout << "* ";
        }

        // Move to the next line
        cout << endl;
    }
    
    return 0;
}
