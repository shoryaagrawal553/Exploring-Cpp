/* 
This program prints a mirrored right-angled triangle pattern with numbers based on user input.
Example for n = 4:
      1
    2 2
  3 3 3
4 4 4 4
*/

#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    
    // Prompt the user to enter the number of rows for the triangle
    cout << "enter n ";
    cin >> n;
    
    // Loop through each row from 1 to n
    for(i = 1; i <= n; i++)
    {
        // Print spaces to create the mirrored effect
        // The number of spaces is determined by (n - i)
        for(j = 1; j <= n - i; j++)  // OR  for(j = i; j <= n - 1; j++)
        {
            cout << "  "; // Print two spaces for alignment
        }

        // Print the number 'i', 'i' times in each row
        // The number of times 'i' is printed is determined by 'i'
        for(j = 1; j <= i; j++)   // OR  for(j = n; j >= n - i + 1; j--)
        {
            cout << i << " "; // Print the number 'i' followed by a space
        }

        // Move to the next line after finishing one row
        cout << endl;
    }

    return 0;
}
