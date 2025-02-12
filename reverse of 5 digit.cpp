#include<iostream>
using namespace std;

class Reverse
{
    public:
    int n = 12345;  // Initialize the number to be reversed

    public:
    void method()
    {
        int x, y = 0, i;
        // Use a while loop to reverse the number
        while (n > 0)   // Using while instead of for removes the
        {               // need to specify the number of digits manually 
            x = n % 10;    // Get the last digit of n
            n = n / 10;    // Remove the last digit from n
            y = (y * 10) + x;   // Append the last digit to y
        }
        cout << y;  // Output the reversed number
    }
};

int main()
{
    Reverse r;  // Create an object of the Reverse class
    r.method(); // Call the method to reverse the number
}
