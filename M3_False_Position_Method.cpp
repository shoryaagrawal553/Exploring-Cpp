// Program to find the root of the equation f(x) = x^3 - 4 using the False Position Method
#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;  

// Define the function: f(x) = x^3 - 4
double f(double x) {
    return x * x * x - 4;
}

int main() {
    // Initial guesses for the false position method
    double x1 = 1, x2 = 3, x0, f0, f1, f2;
    int iteration = 0;

    f1 = f(x1); // Evaluate the function at x1
    f2 = f(x2); // Evaluate the function at x2

    // Check if the initial interval is valid (root is bracketed)
    if (f1 * f2 > 0) {
        cout << "Invalid interval. The function does not bracket a root.\n";
        return 1;
    }

    // Set the output format for better readability
    cout << fixed << setprecision(6);
    cout << "Iter\t" << setw(12) << "x0"
         << setw(12) << "x1"
         << setw(12) << "x2"
         << setw(16) << "f(x0)" << endl;

    // Perform 3 iterations of the false position method
    while (iteration < 3) {
        // Calculate the next approximation using the false position formula
        x0 = x1 - (f1 * (x2 - x1)) / (f2 - f1);
        f0 = f(x0); // Evaluate function at the new approximation

        // Print the current iteration details
        cout << ++iteration << "\t"
             << setw(12) << x0
             << setw(12) << x1
             << setw(12) << x2
             << setw(16) << f0 << endl;

        // Update the interval for the next iteration
        if (f1 * f0 < 0) {    // Root is in [x1, x0]
            x2 = x0;          // Move upper bound to x0
            f2 = f0;          // Update f2 to f(x0)
        } else {              // Root is in [x0, x2]
            x1 = x0;          // Move lower bound to x0
            f1 = f0;          // Update f1 to f(x0)
        }
    }

    // Display the approximate root after 3 iterations
    cout << "\nApproximate root after 3 iterations = " << x0 << endl;

    return 0;
}
