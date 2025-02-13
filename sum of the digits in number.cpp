#include <iostream>
using namespace std;

int main()
{
    int n, x, y = 0; // Initialize variables: n for input number, x for storing each digit, y for the sum of digits
    cout << "input: "; // Prompt user for input
    cin >> n; // Read user input and store it in variable n
    
    int original_n = n; // Store the original value of n for later use in the output
    while (n > 0) // Loop until n becomes 0
    {
        x = n % 10; // Get the last digit of n
        n = n / 10; // Remove the last digit from n
        y += x; // Add the digit to the sum
    }
    
    // Output the sum of the digits along with the original number
    cout << "The sum of the digits of " << original_n << " is " << y; 
    return 0; // Return 0 to indicate successful execution
}
