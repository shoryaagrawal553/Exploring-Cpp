#include <iostream>
using namespace std;

int main()
{
    // Initialize the size of the array
    int n=6;
    
    // Define and initialize the array
    int arr[n]={1,2,3,4,5,6};
    
    // Initialize start and end pointers
    int start=0, end=n-1, i;  

    // Print the initial array
    cout<<"initial array \n";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    // Reverse the array using two-pointer technique
    while(start<end) //for (int start = 0, end = n - 1; start < end; start++, end--)
    {
        // Swap the elements at start and end
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Print the reversed array
    cout<<"\nReversed array \n";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
