#include <iostream> // Include input-output stream library
using namespace std; // Use the standard namespace

int main()
{
    int n, i, flag = 0; // Declare variables: n (input number), i (loop counter), flag (to track if the number is prime)

    cout << "input "; // Prompt the user for input
    cin >> n; // Store the user input in variable n

    if (n > 1) // Check if the input number is greater than 1 (prime numbers are greater than 1)
    {
        for (i = 2; i < n; i++) // Loop from 2 to n-1 to check divisibility
        {
            if (n % i == 0) // If n is divisible by i, it's not a prime number
            {
                cout << n << " is not prime"; // Print that the number is not prime
                flag++; // Increment the flag to indicate non-primality
                break; // Exit the loop as we found a divisor
            }
            // else block is commented out, as it conflicts with the logic 
            // of checking all divisors before concluding primality.
        }
        if (flag == 0) // If flag is still 0 after the loop, the number is prime
        {
            cout << n << " is prime "; // Print that the number is prime
        }
    }
    // else block is commented out; it could handle invalid input (like n <= 1).
    
    return 0; // Return 0 to indicate successful program execution
}
