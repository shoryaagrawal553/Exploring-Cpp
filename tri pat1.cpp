/*
This program takes an input `n` from the user and prints a triangular pattern of stars.
For example, if the user enters `3`, the output will be:
* 
* *
* * *
*/

#include<iostream>
using namespace std;

int main()
{
    int i, j, n;

    // Prompt the user to enter the number of rows for the triangle
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop to handle the number of rows
    for(i = 1; i <= n; i++)
    {
        // Inner loop to handle the number of stars in each row
        for(j = 1; j <= i; j++)
        {
            cout << "* ";  // Print a star
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;  // Indicate that the program ended successfully
}
