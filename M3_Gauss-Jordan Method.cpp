#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    // Prompt user for the number of equations (and variables)
    cout << "Enter the number of equations: ";
    cin >> n;

    double a[n][n + 1]; // Augmented matrix to store coefficients and constants

    // Input the coefficients and constants for each equation
    cout << "Enter the coefficients of the equations (including constants):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    // Gauss-Jordan Elimination process
    for (int i = 0; i < n; i++) {
        // Normalize the pivot row so that the pivot element is 1
        double pivot = a[i][i];
        for (int j = 0; j <= n; j++) {
            a[i][j] /= pivot;
        }

        // Eliminate the current variable from all other rows
        for (int k = 0; k < n; k++) {
            if (k != i) {
                double factor = a[k][i];
                for (int j = 0; j <= n; j++) {
                    a[k][j] -= factor * a[i][j];
                }
            }
        }
    }

    // Output the solution for each variable
    cout << "\nSolution:\n";
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << fixed << setprecision(6) << a[i][n] << endl;
    }

    return 0;
}

// This code implements the Gauss-Jordan method to solve a system of linear equations.
// It reads the augmented matrix, performs row operations to reach reduced row-echelon form,
// and prints the solutions to the variables.
