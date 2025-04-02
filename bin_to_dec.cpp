#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, rem, pow1=1, decno=0;
    
    // Prompt user to enter a binary number
    cout << "Enter the binary number: ";
    cin >> n;

    // Loop to convert binary to decimal
    while(n > 0)
    {
        rem = n % 10;  // Get the last digit (remainder)
        n = n / 10;    // Remove the last digit from the number
        decno = (rem * pow1) + decno;  // Update the decimal number
        pow1 *= 2;     // Update the power of 2
    }
    
    // Output the decimal number
    cout << decno;
    return 0;
}
