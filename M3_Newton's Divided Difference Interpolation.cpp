// Newton's Divided Difference Interpolation Method

#include <iostream>
#include <iomanip>
using namespace std;   
  
int main() {
    int n;
    // Prompt user for the number of data points
    cout << "How many records you want to enter: ";
    cin >> n;

    // Arrays for x values and divided difference table (f)
    double x[n], f[n][n], value;

    // Input values for x and f(x)
    for (int i = 0; i < n; i++) {
        cout << "Enter x" << i << ": ";
        cin >> x[i];                 // Input x value
        cout << "Enter f(x" << i << "): ";
        cin >> f[i][0];              // Input corresponding y value (f(x))
    }

    // Construct the divided difference table
    // j = column in table, i = row
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            // Calculate divided difference for current cell
            f[i][j] = (f[i + 1][j - 1] - f[i][j - 1]) / (x[i + j] - x[i]);
        }
    }

    // Prompt user for the value to interpolate
    cout << "Enter the value of x for interpolation: ";
    cin >> value;

    // Calculate f(value) using Newton's formula
    double result = f[0][0];  // Initialize result with f[x0]
    double term;

    // Apply Newton's interpolation formula
    for (int i = 1; i < n; i++) {
        term = f[0][i];       // Start with the divided difference coefficient
        for (int j = 0; j < i; j++) {
            term *= (value - x[j]); // Multiply by (value - xj) for all previous xj
        }
        result += term;       // Add term to result
    }

    // Output the result with 6 decimal places
    cout << fixed << setprecision(6);
    cout << "\nf(" << value << ") = " << result << endl;

    return 0;
}

// This code implements Newton's Divided Difference Interpolation Method.
// It constructs a divided difference table based on the input data points and then uses it to compute the
// interpolated value at a specified point.





