#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "input ";
    cin >> n;

    // Check if the input number is greater than 1
    if(n > 1) {
        // Loop from 2 to n-1 to check for factors
        for(i = 2; i < n; i++) {
            // If n is divisible by i, it's not a prime number
            if(n % i == 0) {
                cout << n << " is not prime";
                break;  // Exit the loop since we found a factor
            }
            else {
                // If n is not divisible by i, it is prime
                // This will incorrectly output that the number is prime
                // because the else statement is executed in the first iteration
                // for odd numbers which are not divisible by 2
                // The loop will not continue because of the break keyword
                // The issue will arise with odd non-prime numbers like 21, 9
                cout << n << " is prime";
                break;  // Exit the loop after the first iteration
            }
        }
    }
    else {
        // If the input number is less than or equal to 1, it's invalid
        cout << "invalid input";
    }
}
