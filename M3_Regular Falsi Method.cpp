#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Define the function f(x) = x^3 - x - 3
double f(double x) {
    return x * x * x - x - 3;
}

int main() {
    double x1 = 1, x2 = 3, x0, f1, f2, f0, error;
    const double EPSILON = 0.0001; // Desired accuracy
    int iteration = 0;

    f1 = f(x1); // Calculate f(x1)
    f2 = f(x2); // Calculate f(x2)

    // Check if initial guesses bracket a root
    if (f1 * f2 > 0) {
        cout << "Invalid initial interval. No root bracketing.\n";
        return 1;
    }

    // Set decimal precision for output
    cout << fixed << setprecision(6);
    // Print table header
    cout << "Iter\t" << setw(10) << "x0"
         << setw(10) << "x1"
         << setw(10) << "x2"
         << setw(16) << "f(x0)" << endl;

    // Start iteration for the False Position method
    do {
        // Calculate x0 using the Regula Falsi formula
        x0 = x1 - f1 * (x2 - x1) / (f2 - f1);
        f0 = f(x0); // Calculate f(x0)

        // Print current iteration details
        cout << ++iteration << "\t"
             << setw(10) << x0
             << setw(10) << x1
             << setw(10) << x2
             << setw(16) << f0 << endl;

        // Update the interval for the next iteration
        if (f1 * f0 < 0) {
            x2 = x0;
            f2 = f0;
        } else {
            x1 = x0;
            f1 = f0;
        }

        // Calculate relative error for stopping condition
        error = fabs((x2 - x1) / x2);

    } while (error >= EPSILON); // Loop until desired accuracy is reached

    // Print the approximate root
    cout << "\nApproximate root = " << x0 << endl;

    return 0;
}
// This code implements the False Position Method (Regula Falsi Method) to find a root of the function f(x) = x^3 - x - 3.
