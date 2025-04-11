#include<iostream> // Include the iostream library for input and output
using namespace std;

// Function to calculate factorial of a number using recursion
int fact(int n)
{
    // Base case: If n is 0 or 1, return 1
    if(n == 0 || n == 1) 
        return 1;

    // Recursive case: Multiply n with the factorial of (n-1)
    return n * fact(n - 1);
}

int main()
{
    int n; // Variable to store the user input
    cout << "Enter a number: "; // Prompt the user to enter a number
    cin >> n; // Read the input number

    // Calculate and display the factorial of the entered number
    cout << "Factorial of " << n << " is " << fact(n) << endl;
    return 0; // Return 0 to indicate successful execution
}
