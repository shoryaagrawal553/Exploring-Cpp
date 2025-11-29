#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;   
 
// Define the function f(x) = 2x^3 + 3x - 1
double f(double x) {
    return 2 * x * x * x + 3 * x - 1; 
}

int main() {
    double x1 = 0, x2 = 1, x0, f0, error; // Initial guesses for the bisection method
    const double EPSILON = 0.0001; // Tolerance for convergence meaning the acceptable error
    int iteration = 0;

    if (f(x1) * f(x2) > 0) {  // Check if the function has different signs at the endpoints
        cout << "No root in the given interval. Try a different interval." << endl;
        return 1;
    }

    cout << fixed << setprecision(6);
    cout << "Iter\t" << setw(12) << "x0"
        << setw(12) << "x1"
        << setw(12) << "x2"
        << setw(16) << "f(x0)" << endl;

    do {
        x0 = (x1 + x2) / 2.0;  // Midpoint of the interval
        f0 = f(x0);  // Evaluate the function at the midpoint

        cout << ++iteration << "\t"   // Print the iteration number and values
            << setw(12) << x0
            << setw(12) << x1
            << setw(12) << x2
            << setw(16) << f0 << endl;

        if (f(x1) * f0 < 0)  // Check if the root is in the left half
            x2 = x0;  // Move the upper bound to the midpoint
        else
            x1 = x0;  // Move the lower bound to the midpoint

        error = fabs((x2 - x1) / x2);  // Calculate the relative error
    } while (error >= EPSILON);  // Continue until the error is within the tolerance

    cout << "\nApproximate root = " << x0 << endl;  

    return 0;
}





