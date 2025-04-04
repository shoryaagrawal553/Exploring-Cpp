#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

int main() {
    int n = 6; // Define the size of the array
    int arr[n] = {1, 2, 3, 4, 5, 6}; // Initialize the array with elements
    int start = 0, end = n - 1, i; // Initialize variables for the start and end indices and a loop counter

    // Print the initial array
    cout << "Initial array \n";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print each element of the array
    }

    // Reverse the array
    while (start < end) {
        swap(arr[start], arr[end]); // Swap the elements at the start and end indices
        start++; // Move the start index to the right
        end--; // Move the end index to the left
    }

    // Print the reversed array
    cout << "\nReversed array \n";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print each element of the reversed array
    }
    return 0; // Return 0 to indicate successful execution
}
