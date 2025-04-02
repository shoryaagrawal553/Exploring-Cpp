#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, rem, bino = 0, pow = 1;
    
    // Prompt user to enter a decimal number
    cout << "Enter the decimal number: ";
    cin >> n;
    
    // Store the original number for output purposes
    int orig = n;
    
    // Loop to convert decimal to binary
    while (n > 0)
    {
        rem = n % 2;    // Get the remainder when n is divided by 2
        n = n / 2;      // Update n to be n divided by 2
        bino = (rem * pow) + bino;  // Update the binary number
        pow *= 10;      // Update the power of 10
    }

    // Output the binary representation of the original number
    cout << "Binary of " << orig << " is " << bino;

    return 0;
}

/*
Iteration 1:
rem = n % 2 = 3 % 2 = 1
n = n / 2 = 3 / 2 = 1
bino = (rem * pow) + bino = (1 * 1) + 0 = 1
pow = pow * 10 = 1 * 10 = 10

Values after Iteration 1:
n = 1
rem = 1
bino = 1
pow = 10

Iteration 2:
rem = n % 2 = 1 % 2 = 1
n = n / 2 = 1 / 2 = 0
bino = (rem * pow) + bino = (1 * 10) + 1 = 11
pow = pow * 10 = 10 * 10 = 100

Values after Iteration 2:
n = 0
rem = 1
bino = 11
pow = 100

Loop Ends:
The loop ends because n = 0.

Final Output:
The binary representation of 3 is 11. The program prints:
*/
