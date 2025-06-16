#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Define f(x) = x^3 - x - 3
double f(double x) {
    return x * x * x - x - 3;
}

// Define f'(x) = 3x^2 - 1
double df(double x) {
    return 3 * x * x - 1;
}

int main() {
    double x0 = 3, x1, fx, dfx, error;
    const double EPSILON = 0.0001;
    int iteration = 0;

    cout << fixed << setprecision(6);
    cout << "Iter\t" << setw(10) << "x"
        << setw(15) << "f(x)"
        << setw(15) << "f'(x)" << endl;

    do {
        fx = f(x0);
        dfx = df(x0);

        if (dfx == 0) {
            cout << "Derivative zero. Cannot continue.\n";
            return 1;
        }

        x1 = x0 - fx / dfx;

        cout << ++iteration << "\t"
            << setw(10) << x1
            << setw(15) << f(x1)
            << setw(15) << df(x1) << endl;

        error = fabs((x1 - x0) / x1);
        x0 = x1;

    } while (error >= EPSILON);

    cout << "\nApproximate root = " << x1 << endl;

    return 0;
}
