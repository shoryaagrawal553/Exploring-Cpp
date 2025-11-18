/*
This program generates Floyd's triangle up to the given number of rows.
Example:
Enter 3 
1
2 3
4 5 6
*/ 

#include<iostream>
using namespace std;

int main()
{
    int i, j, n;
    // Ask the user for the number of rows
    cout << "enter ";
    cin >> n;

    int num = 1; // Initialize the starting number
    // Loop through each row
    for (i = 1; i <= n; i++)
    {
        // Loop through each column in the current row
        for (j = 1; j <= i; j++)
        {
            cout << num << " "; // Print the current number
            num++; // Increment the number
        }
        cout << endl; // Move to the next line after finishing the current row
    }

    return 0;
}



