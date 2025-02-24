#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0; // Initialize variables: n for input number, sum for storing the sum of multiples of 3
    cout << "enter "; // Prompt user for input
    cin >> n; // Read user input and store it in variable n
    
    int i;
    for (i = 1; i <= n; i++) // Loop from 1 to n
    {
        if (i % 3 == 0) // Check if the number is divisible by 3
        {
            sum = sum + i; // If true, add the number to the sum
        }
    }
    
    cout << sum; // Output the final sum of numbers divisible by 3
    return 0; // Return 0 to indicate successful execution
}
