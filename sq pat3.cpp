/*n= 3
 1 2 3 
 4 5 6 
 7 8 9 */

#include<iostream>
using namespace std;

int main()
{
    int i, j, n;
    
    // Prompt the user to enter the size of the matrix
    cout<<"Enter ";
    // Read the size of the matrix from the user
    cin>>n;

    int num=1; // Initialize the number to be printed

    // Loop through each row
    for(i=1; i<=n; i++)
    {
        // Loop through each column
        for(j=1; j<=n; j++)
        {
            // Print the current number
            cout<<num<<" ";
            // Increment the number to be printed
            num++;
        }
        // Move to the next line after each row
        cout<<endl;
    }

    return 0; // Indicate that the program ended successfully
}
