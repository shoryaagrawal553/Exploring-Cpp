#include<iostream>
using namespace std;

int main()
{
    int a, b, c;  // Declare three integer variables

    cout << "Enter three numbers: ";  // Prompt user to enter three numbers
    cin >> a >> b >> c;  // Read the three numbers from user input

    // Check if 'a' is greater than both 'b' and 'c'
    if (a > b && a > c)
    {
        cout << "A is greatest";  // If true, print that 'A' is the greatest
    }
    else
    {
        // If 'a' is not the greatest, check if 'b' is greater than 'c'
        if (b > c)
        {
            cout << "B is greatest";  // If true, print that 'B' is the greatest
        }
        else
        {
            cout << "C is greatest";  // If 'b' is not greater than 'c', print that 'C' is the greatest
        }
    }

    return 0;  // Indicate successful program termination
}
