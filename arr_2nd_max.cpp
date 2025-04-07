#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 5; // Size of the array
    int arr[n] = {4, 10, 6, 20, 2}; // Initialize the array with values
    
    int ans = INT_MIN; // Initialize the first largest element with the minimum integer value
    // Loop to find the first largest element in the array
    for (int i = 0; i < n; i++)  
    {
        if (arr[i] > ans) // If the current element is greater than ans
        {
            ans = arr[i]; // Update ans to the current element
        }
    }

    int ans2 = INT_MAX; // Initialize the second largest element with the maximum integer value
    // Loop to find the second largest element in the array
    for (int i = 0; i < n; i++)  
    {
        if (arr[i] < ans2) // If the current element is smaller than ans2
        {
            ans2 = arr[i]; // Update ans2 to the current element
        }
    }

    cout << "Second largest element of the array: ";

    // Loop to print all elements of the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nis: " << ans2 << endl; // Print the second largest element

    return 0;
}
