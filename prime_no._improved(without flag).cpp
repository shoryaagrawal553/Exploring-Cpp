#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

int main()
{
    int n, i; // Declare variables 'n' for input and 'i' for loop counter
    cout << "input: "; // Prompt the user for input
    cin >> n; // Read the user's input and store it in 'n'

    if (n > 1) // Check if the input 'n' is greater than 1 (only numbers > 1 can be prime)
    {
        for (i = 2; i < n; i++) // Loop from 2 to n-1 to check divisibility
        {
            if (n % i == 0) // If 'n' is divisible by 'i', it is not prime
            {
                cout << n << " is not prime"; // Output that 'n' is not a prime number
                // break;   // Uncommenting this would terminate the loop but might cause issues for odd non-prime numbers
                return 0;   // End the program since 'n' is confirmed to be non-prime
            }
        }
        cout << n << " is prime "; // If no divisors are found, 'n' is prime
    }
    else // If 'n' is less than or equal to 1
    {
        cout << "invalid input"; // Output an error message for invalid input
    }

    return 0; // End of the program
}
