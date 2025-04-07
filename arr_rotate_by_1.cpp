#include <iostream>
using namespace std;

int main()
{
    int n = 6, i; // Initialize the size of the array and the loop variable
    int arr[n] = {1, 2, 3, 4, 5, 6}; // Initialize the array with 6 elements
    int temp = arr[n-1]; // Store the last element of the array in a temporary variable

    // Print the initial array
    cout << "Initial array \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Rotate the array elements to the right by one position
    for (i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i]; // Shift each element to the right
    }
    arr[0] = temp; // Place the last element at the first position

    // Print the rotated array
    cout << "\nRotated array \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
