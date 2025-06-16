#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of equations: ";
    cin >> n;

    double a[n][n + 1]; // Augmented matrix
    double x[n];        // Solution vector

    cout << "Enter the coefficients of the equations (including constants):\n";
    for (int i = 0; i < n; i++) {   // Loop through each equation
        for (int j = 0; j <= n; j++) {  // Loop through each coefficient
            cin >> a[i][j]; // Read the coefficients and constants
        }
    }

    // Forward Elimination
    for (int i = 0; i < n; i++) {   // Loop through each pivot row
        // Partial pivoting
        for (int k = i + 1; k < n; k++) {   // Loop through rows below the pivot row
            if (abs(a[k][i]) > abs(a[i][i])) {  // Check if the current row has a larger pivot
                for (int j = 0; j <= n; j++) {  // Swap the rows
                    swap(a[i][j], a[k][j]);     
                }
            }
        }

        for (int k = i + 1; k < n; k++) {
            double factor = a[k][i] / a[i][i];  // Calculate the factor for elimination
            for (int j = 0; j <= n; j++) {  // Loop through each coefficient
                a[k][j] -= factor * a[i][j];    // Eliminate the variable in the current row
            }
        }
    }

    // Backward Substitution
    for (int i = n - 1; i >= 0; i--) { // Loop through each row from bottom to top
        x[i] = a[i][n]; // Start with the constant term
        for (int j = i + 1; j < n; j++) {   // Loop through the variables in the current row
            x[i] -= a[i][j] * x[j]; // Subtract the known variables multiplied by their coefficients
        }
        x[i] /= a[i][i];  // Divide by the pivot to get the value of the variable
    }

    cout << "\nSolution:\n";
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << fixed << setprecision(6) << x[i] << endl;
    }

    return 0;
}
// This code implements the Gauss Elimination method to solve a system of linear equations.
// It includes forward elimination with partial pivoting and backward substitution to find the solution vector.