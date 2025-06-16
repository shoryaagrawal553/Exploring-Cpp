#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "How many records you want to enter: ";
    cin >> n;

    double x[n], fx[n], xp, result = 0.0;

    // Input data points
    for (int i = 0; i < n; i++) {
        cout << "Enter x" << i << ": ";
        cin >> x[i];
        cout << "Enter f(x" << i << "): ";
        cin >> fx[i];
    }

    cout << "Enter X for finding f(X): ";
    cin >> xp;

    // Lagrange Interpolation Formula
    for (int i = 0; i < n; i++) {
        double term = fx[i];
        for (int j = 0; j < n; j++) {
            if (j != i) {
                term = term * (xp - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }

    cout << fixed << setprecision(6);
    cout << "\nf(" << xp << ") = " << result << endl;

    return 0;
}
// This code implements the Lagrange Interpolation Method to find the value of a function at a given point 
// xp based on provided data points (x, f(x)).
// It uses the Lagrange interpolation formula to compute the result and outputs it with six decimal places of precision.    