// power of 2
// An integer n is a power of two, if there exists an integer x such that n=2^x.
// n=1 = 2^0, n=2 = 2^1, n=4 = 2^2...

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;

    // Method 1: Using a loop to check if n is a power of 2
    for (int i = 0; i <= n / 2; i++) // Loop through potential powers of 2
    {
        if (n == pow(2, i)) // Check if n is equal to 2^i
        {
            cout << n << " is a power of 2";
            return 0; // Exit the program if a power of 2 is found
        }
    }

    cout << n << " is not a power of 2"; // If no power of 2 is found

    // Additional method: Using recursion (this part is not yet implemented)

    // Method 2: Using a loop and division to check if n is a power of 2
    int original = n; // Store the original value of n

    if (n <= 0) // Check if n is non-positive
    {
        cout << original << " is not a power of 2";
        return 0; // Exit the program if n is non-positive
    }
    while (n != 1) // Continue dividing n by 2 until n becomes 1
    {
        if (n % 2 == 1) // If n is not divisible by 2, it's not a power of 2
        {
            cout << original << " is not a power of 2";
            return 0; // Exit the program if n is not a power of 2
        }
        else
        {
            n = n / 2; // Divide n by 2
        }
    }
    cout << original << " is a power of 2"; // If n becomes 1, then it's a power of 2

    return 0; // Exit the program
}
