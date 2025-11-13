#include <iostream>
#include <iomanip>
using namespace std;

int main() {  
    int n;
    cout << "Enter the number of equations: ";
    cin >> n;

    double a[n][n + 1]; // Augmented matrix to store coefficients and constants
    double x[n];        // Solution vector

    // Input: coefficients and constants for each equation
    cout << "Enter the coefficients of the equations (including constants):\n";
    for (int i = 0; i < n; i++) {   // Loop through each equation
        for (int j = 0; j <= n; j++) {  // Loop through each coefficient (and constant)
            cin >> a[i][j]; // Read the coefficients and constants
        }
    }

    // Forward Elimination to convert matrix to upper triangular form
    for (int i = 0; i < n; i++) {   // Loop through each pivot row
        // Partial pivoting to improve numerical stability
        for (int k = i + 1; k < n; k++) {   // Loop through rows below the pivot row
            if (abs(a[k][i]) > abs(a[i][i])) {  // If a larger pivot is found
                for (int j = 0; j <= n; j++) {  // Swap the rows
                    swap(a[i][j], a[k][j]);     
                }
            }
        }

        // Eliminate the current variable from rows below
        for (int k = i + 1; k < n; k++) {
            double factor = a[k][i] / a[i][i];  // Calculate the factor for elimination
            for (int j = 0; j <= n; j++) {  // Loop through each coefficient
                a[k][j] -= factor * a[i][j];    // Subtract factor * pivot row from current row
            }
        }
    }

    // Backward Substitution to solve for variables
    for (int i = n - 1; i >= 0; i--) { // Start from the last row and move upwards
        x[i] = a[i][n]; // Start with the constant term
        for (int j = i + 1; j < n; j++) {   // Subtract already found variables
            x[i] -= a[i][j] * x[j];
        }
        x[i] /= a[i][i];  // Divide by the coefficient of the variable
    }

    // Output: Display the solutions
    cout << "\nSolution:\n";
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << fixed << setprecision(6) << x[i] << endl;
    }

    return 0;
}

// This code implements the Gauss Elimination method to solve a system of linear equations.
// It includes forward elimination with partial pivoting and backward substitution to find the solution vector.


