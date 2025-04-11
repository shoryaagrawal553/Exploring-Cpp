#include <iostream>
using namespace std;

int main()
{
    // Prompt the user to enter a number and check if it is a power of 2

    int n;
    cout << "Enter a number: ";
    cin >> n;

    // If the input number is less than or equal to 0, it cannot be a power of 2
    if (n <= 0)
    {
        return 0; // Terminate the program
    }

    // Method 1: (Commented Out)
    // Using bitwise left (<<) shift operator to check if a number is a power of 2
    // The left shift operator (x << y) multiplies x by 2^y
    // For example: 1 << 3 = 8 (2^3)
    /*
    for (int i = 0; i <= n / 2; i++)
    {
        if (n == (1 << i)) // Check if n equals 2^i
        {
            cout << n << " is a power of 2";
            return 0; // Terminate the program if a match is found
        }
    }
    cout << n << " is not a power of 2"; // If no match is found, print this message
    */

    // Method 2:
    // Using bitwise AND (&) operator to check if a number is a power of 2
    // A number is a power of 2 if it has only one bit set in its binary representation.
    // For example:
    // 1 (0001), 2 (0010), 4 (0100), 8 (1000), etc.
    // Subtracting 1 from a power of 2 flips all bits after the set bit and turns the set bit to 0.
    // Example:
    // n = 4 (0100), n - 1 = 3 (0011), n & (n - 1) = 0100 & 0011 = 0000
    // If n & (n - 1) == 0, then n is a power of 2.
    // If n is not a power of 2, then n & (n - 1) will not be equal to 0.
    // Example: n = 6 (0110), n - 1 = 5 (0101), n & (n - 1) = 0110 & 0101 = 0100

    if ((n & (n - 1)) == 0) // Check if the number is a power of 2 using bitwise AND
    {
        cout << n << " is a power of 2"; // If condition is true, print this message
    }
    else
    {
        cout << n << " is not a power of 2"; // If condition is false, print this message
    }

    return 0; // End the program
}
