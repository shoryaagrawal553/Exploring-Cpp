#include <iostream>
using namespace std;

int main()
{
    // using bitwise left(<<) and right(>>) shift operators to check if a number is power of 2

    int n;
    cout<<"enter a number ";
    cin>>n;
    if(n<=0)
    {
        return 0;
    }

    // for(i=0; i<=n/2; i++)
    // {
    //     if(n== (1<<i)) // left shift (x<<y)= x*2^y
    //     {
    //         cout<< n << " is a power of 2";
    //         return 0;
    //     }
    // }

    // cout << n << " is not a power of 2";

    // using bitwise AND(&) operator to check if a number is power of 2
    if ((n&(n-1)) == 0)
    {
        cout << n << " is a power of 2";
    }
    else
    {
        cout << n << " is not a power of 2";
    }
    return 0;
}

 // Method 2: Using bitwise AND (&) operator
    // A number is a power of 2 if it has only one bit set in its binary representation.
    // For example:
    // 1 (0001), 2 (0010), 4 (0100), 8 (1000), etc.
    // Subtracting 1 from a power of 2 flips all bits after the set bit and turns the set bit to 0.
    // Example:
    // n = 4 (0100), n - 1 = 3 (0011), n & (n - 1) = 0100 & 0011 = 0000
    // If n & (n - 1) == 0, then n is a power of 2.
    // If n is not a power of 2, then n & (n - 1) will not be equal to 0.
    // Example: n = 6 (0110), n - 1 = 5 (0101), n & (n - 1) = 0110 & 0101 = 0100
    