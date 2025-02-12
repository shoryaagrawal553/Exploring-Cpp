#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "enter ";
    cin >> n;  // Input the number to check for prime

    bool isprime = true;  // Initialize a boolean variable to true

    // Loop from 2 to n-1 to check for factors
    for (i = 2; i < n; i++)
    {
        // If n is divisible by i, it's not a prime number
        if (n % i == 0)
        {
            cout << n << " is not prime";  // Output that n is not prime
            isprime = false;  // Set the boolean variable to false
            break;  // Exit the loop since we found a factor
        }
    }

    // If the boolean variable is still true, n is a prime number
    if(isprime == true)
    {
        cout << n << " is prime";  // Output that n is prime
    }

    return 0;  // Return 0 to indicate successful execution
}
