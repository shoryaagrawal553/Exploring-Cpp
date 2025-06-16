#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "How many records you want to enter: ";
    cin >> n;

    double x[n], f[n][n], value;

    // Input values
    for (int i = 0; i < n; i++) {
        cout << "Enter x" << i << ": ";
        cin >> x[i];
        cout << "Enter f(x" << i << "): ";
        cin >> f[i][0];
    }

    // Construct divided difference table
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            f[i][j] = (f[i + 1][j - 1] - f[i][j - 1]) / (x[i + j] - x[i]);
        }
    }

    cout << "Enter the value of x for interpolation: ";
    cin >> value;

    // Calculate f(value)
    double result = f[0][0];
    double term;

    for (int i = 1; i < n; i++) {
        term = f[0][i];
        for (int j = 0; j < i; j++) {
            term *= (value - x[j]);
        }
        result += term;
    }

    // Output
    cout << fixed << setprecision(6);
    cout << "\nf(" << value << ") = " << result << endl;

    return 0;
}
// This code implements Newton's Divided Difference Interpolation Method.
// It constructs a divided difference table based on the input data points and then uses it to compute the 
//interpolated value at a specified point. 