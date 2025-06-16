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
    const double EPSILON = 0.0001;
    int iteration = 0;

    f1 = f(x1);
    f2 = f(x2);

    if (f1 * f2 > 0) {
        cout << "Invalid initial interval. No root bracketing.\n";
        return 1;
    }

    cout << fixed << setprecision(6);
    cout << "Iter\t" << setw(10) << "x0"
         << setw(10) << "x1"
         << setw(10) << "x2"
         << setw(16) << "f(x0)" << endl;

    do {
        x0 = x1 - f1 * (x2 - x1) / (f2 - f1);
        f0 = f(x0);

        cout << ++iteration << "\t"
             << setw(10) << x0
             << setw(10) << x1
             << setw(10) << x2
             << setw(16) << f0 << endl;

        if (f1 * f0 < 0) {
            x2 = x0;
            f2 = f0;
        } else {
            x1 = x0;
            f1 = f0;
        }

        error = fabs((x2 - x1) / x2);

    } while (error >= EPSILON);

    cout << "\nApproximate root = " << x0 << endl;

    return 0;
}
// This code implements the False Position Method (Regula Falsi Method) to find a root of the function f(x) = x^3 - x - 3.