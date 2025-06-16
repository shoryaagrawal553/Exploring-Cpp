#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of equations: ";
    cin >> n;

    double a[n][n + 1]; // Augmented matrix

    cout << "Enter the coefficients of the equations (including constants):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    // Gauss-Jordan Elimination
    for (int i = 0; i < n; i++) {
        // Normalize pivot row
        double pivot = a[i][i];
        for (int j = 0; j <= n; j++) {
            a[i][j] /= pivot;
        }

        // Eliminate other rows
        for (int k = 0; k < n; k++) {
            if (k != i) {
                double factor = a[k][i];
                for (int j = 0; j <= n; j++) {
                    a[k][j] -= factor * a[i][j];
                }
            }
        }
    }

    cout << "\nSolution:\n";
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << fixed << setprecision(6) << a[i][n] << endl;
    }

    return 0;
}
// This code implements the Gauss-Jordan method to solve a system of linear equations.
// It normalizes each pivot row and eliminates the corresponding variable from all other rows,