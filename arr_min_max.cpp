#include<iostream>
using namespace std;

int main()
{
    // Initialize an array with 5 integers
    int a[5] = {55, 65, -22, 31, 43000};
    int i;

    // Method 1: Simple approach to find the smallest and largest elements
    // Uncomment the following lines to use this method

    // int smallest = a[0], largest = a[0];
    // for (i = 1; i < 5; i++) {
    //     if (a[i] < smallest) {
    //         smallest = a[i];
    //     } else if (a[i] > largest) {
    //         largest = a[i];
    //     }
    // }

    // Method 2: Using INT_MAX and INT_MIN for a more generalized solution
    // Uncomment the following lines to use this method

    // int smallest = INT_MAX, largest = INT_MIN;
    // for (i = 0; i < 5; i++) {
    //     if (a[i] < smallest) {
    //         smallest = a[i];
    //     } else if (a[i] > largest) {
    //         largest = a[i];
    //     }
    // }

    // Print the results
    // cout << "smallest value is: " << smallest;
    // cout << "\nlargest value is: " << largest;

    // Method 3: Using built-in functions min() and max()
    // Initialize smallest and largest to 0
    int smallest = 0, largest = 0;

    // Loop through the array to find the smallest and largest elements
    for (i = 0; i < 5; i++) {
        smallest = min(smallest, a[i]);
        largest = max(largest, a[i]);
    }

    // Print the smallest and largest values
    cout << "smallest value is: " << smallest;
    cout << "\nlargest value is: " << largest;

    return 0;
}

// If you know the array is non-empty and contains valid values, 
// use Method 1 for simplicity and efficiency. 
// If you want a more generalized solution, use Method 2.
