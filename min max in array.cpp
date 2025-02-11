#include<iostream>
using namespace std;

int main()
{
    int a[5] = {55, 65, 22, 31, 43};  // Initialize an array with 5 elements
    int i;  // Declare a loop variable
    int min = a[0], max = a[0];  // Initialize min and max with the first element of the array

    // Loop through the array starting from the second element
    for(i = 1; i < 5; i++)
    {
        if(a[i] < min)  // Check if the current element is less than min
        {
            min = a[i];  // Update min
        }
        else if(a[i] > max)  // Check if the current element is greater than max
        {
            max = a[i];  // Update max
        }
    }

    cout << "Min value is: " << min;  // Print the minimum value in the array
    cout << "\nMax value is: " << max;  // Print the maximum value in the array

    return 0;  // Indicate successful program termination
}
