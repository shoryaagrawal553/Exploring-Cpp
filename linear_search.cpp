#include <iostream> // Include the input-output stream library for cin and cout
using namespace std; // Use the standard namespace to avoid prefixing std::

// Main function where the program execution starts
int main()
{
    int n = 6; // Size of the array
    int arr[n] = {5, 34, 22, 1, 61, 36}; // Initialize an array with 6 elements
    int i, target; // Declare variables for iteration and storing the target value
    
    // Prompt the user to enter the target value
    cout << "Enter the target: ";
    cin >> target; // Take the target value as input from the user

    // Iterate through the array to search for the target value
    for (i = 0; i < n; i++)
    {
        // Check if the current array element matches the target
        if (arr[i] == target)
        {
            // If found, print the index and position (1-based) of the target
            cout << target << " found at index " << i << " and position " << i + 1;
            return 0; // Exit the program as the target is found
        }
    }

    // If the loop completes and the target is not found, print a message
    cout << target << " not found in the array ";
    
    return 0; // Exit the program successfully
}
