#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Define the function: f(x) = x^3 - 4
double f(double x) {
    return x * x * x - 4;
}

int main() {
    double x1 = 1, x2 = 3, x0, f0, f1, f2;  // Initial guesses for the false position method
    int iteration = 0;

    f1 = f(x1); // Evaluate the function at x1
    f2 = f(x2);  // Evaluate the function at x2

    if (f1 * f2 > 0) {  // Check if the function has different signs at the endpoints
        cout << "Invalid interval. The function does not bracket a root.\n";
        return 1;
    }

    cout << fixed << setprecision(6);
    cout << "Iter\t" << setw(12) << "x0"
        << setw(12) << "x1"
        << setw(12) << "x2"
        << setw(16) << "f(x0)" << endl;

    while (iteration < 3) {  // Perform 3 iterations
        // Calculate the next approximation using the false position formula
        x0 = x1 - (f1 * (x2 - x1)) / (f2 - f1);  
        f0 = f(x0); // Evaluate the function at the new approximation

        cout << ++iteration << "\t"
            << setw(12) << x0
            << setw(12) << x1
            << setw(12) << x2
            << setw(16) << f0 << endl;

        if (f1 * f0 < 0) {  // Check if the root is in the left half
            x2 = x0; // Move the upper bound to the new approximation
            f2 = f0;    // Update the function value at the new upper bound
        } else {
            x1 = x0;    // Move the lower bound to the new approximation
            f1 = f0;    // Update the function value at the new lower bound
        }
    }

    cout << "\nApproximate root after 3 iterations = " << x0 << endl;

    return 0;
}
