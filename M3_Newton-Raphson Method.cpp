#include <iostream>    // For input and output operations
#include <iomanip>     // For output formatting (setprecision, setw)
#include <cmath>       // For mathematical functions like fabs()
using namespace std;   
    
// Define the function f(x) = x^3 - x - 3
double f(double x) {
    return x * x * x - x - 3;
}

// Define the derivative f'(x) = 3x^2 - 1
double df(double x) {
    return 3 * x * x - 1;
}

int main() {
    double x0 = 3, x1, fx, dfx, error;      // Initial guess, next approximation, function value, derivative, error
    const double EPSILON = 0.0001;          // Desired accuracy (tolerance)
    int iteration = 0;                      // Iteration counter

    cout << fixed << setprecision(6);       // Set output to fixed-point notation with 6 decimal places
    cout << "Iter\t" << setw(10) << "x"
        << setw(15) << "f(x)"
        << setw(15) << "f'(x)" << endl;     // Print table header

    // Start the Newton-Raphson iteration
    do {
        fx = f(x0);        // Evaluate function at current guess
        dfx = df(x0);      // Evaluate derivative at current guess

        if (dfx == 0) {    // Prevent division by zero
            cout << "Derivative zero. Cannot continue.\n";
            return 1;
        }

        x1 = x0 - fx / dfx;    // Newton-Raphson formula to get next approximation

        // Print current iteration data
        cout << ++iteration << "\t"
            << setw(10) << x1
            << setw(15) << f(x1)
            << setw(15) << df(x1) << endl;

        error = fabs((x1 - x0) / x1);   // Calculate relative error
        x0 = x1;                        // Update guess for next iteration

    } while (error >= EPSILON);         // Repeat until desired accuracy is achieved

    cout << "\nApproximate root = " << x1 << endl;    // Output the result

    return 0;   // Program ends
}






