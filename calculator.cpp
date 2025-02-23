#include <iostream>
using namespace std;

int main()
{
    float a, b;  // Declare variables to store two numbers
    char s;  // Declare variable to store the operator

    cout << "Enter your input: ";  // Prompt user for input
    cin >> a >> s >> b;  // Take input in the format: number operator number

    switch (s)  // Switch case to check the operator
    {
        case '+':  // If operator is '+'
            cout << "= " << a + b;  // Perform addition
            break;
        case '-':  // If operator is '-'
            cout << "= " << a - b;  // Perform subtraction
            break;
        case '*':  // If operator is '*'
            cout << "= " << a * b;  // Perform multiplication
            break;
        case '/':  // If operator is '/'
            if (b != 0) {  // Check if divisor is not zero
                cout << "= " << a / b;  // Perform division
            } else {
                cout << "infinity ";  // Print infinity if divisor is zero
            }
            break;
        default:  // If operator is not recognized
            cout << "wrong input";  // Print error message
            break;
    }

    return 0; 
}
