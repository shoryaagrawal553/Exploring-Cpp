#include<iostream>
using namespace std; 

int main()
{
    int i, j;  // Declare loop variables

    // This section is commented out
    // cout<<"for printing 5 stars in n lines/rows\n";
    // int n= 3;
    // for(i=1; i<=n; i++)  // Loop to print 5 stars in n lines/rows
    // {
    //     cout<<"*****";
    //     cout<<endl;  // Move to next line
    // }

    // This section is commented out
    // cout<<"for printing n stars per line\n";
    // n=5;
    // for(i=1; i<=n; i++) // Loop to print n stars per line
    // {
    //     cout<<"* ";
    // }

    // This section prints a square pattern of stars
    // cout<<"\nfor printing n stars in n lines\n";
    int n = 3;  // Number of rows and columns
    for(i = 1; i <= n; i++)  // Outer loop for rows
    {
        for(j = 1; j <= n; j++)  // Inner loop for columns
        {
            cout << "* ";  // Print star followed by a space
        }
        cout << endl;  // Move to the next line after each row is printed
    }

    return 0;  // Indicate successful program termination
}
