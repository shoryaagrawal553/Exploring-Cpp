/* 
This C++ program prints an inverted triangular pattern based on user input.
Example for input 4:
1 1 1 1 
  2 2 2 
    3 3 
      4 
*/

#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "enter ";     
    cin >> n; // User input for the number of rows

    for(i = 1; i <= n; i++) // Loop for each row
    {
        for(j = 1; j < i; j++) // Loop for leading spaces
        {
            cout << "  "; // Print spaces
        }

        for(j = 1; j <= n - i + 1; j++) // Loop for printing numbers
        {   // i=1 => j=1 to 4-1+1=4 => 1 1 1 1; 
            // i=2 => j=1 to 4-2+1=3 => 2 2 2; 
            // i=3 => j=1 to 4-3+1=2 => 3 3; 
            // i=4 => j=1 to 4-4+1=1 => 4
            cout << i << " "; // Print the current row number
        }

        cout << endl; // Move to the next line after each row
    }
}
