/* 
This program prints a mirrored right-angled triangle pattern based on user input.
Example for n = 4:
+ + + * 
+ + * *
+ * * *
* * * *
*/

#include<iostream>
using namespace std;

int main()
{
    int i, j, n;
    
    // Prompt the user to enter the number of rows for the triangle
    cout << "enter n ";
    cin >> n;
    
    // First method to print the pattern
    for(i = 1; i <= n; i++)
    {
        // Print '+' characters
        for(j = i; j <= n - 1; j++)
        {
            cout << "+ ";  
        }
        
        // Print '*' characters
        for(j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl; // Move to the next line
    }

    // OR

    // Prompt the user to enter the number of rows for the triangle again
    cout << "enter n ";
    cin >> n;

    // Second method to print the pattern
    for(i = 1; i <= n; i++)
    {
        // Print '+' characters
        for(j = 1; j <= n - i; j++)
        {
            cout << "+ ";  
        }

        // Print '*' characters
        for(j = 1; j <= i; j++)
        {
            cout << "* ";
        }   
        cout << endl; // Move to the next line
    }

    return 0;
}
