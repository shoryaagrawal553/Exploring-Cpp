#include <iostream>
using namespace std;

int main()
{
    int n=10;
    int arr[n]={1,2,3,4,5,1,2,3,4,1};
    int ans=0;
    int s=0, e=n-1;

    while(s<e)
    {
        if(arr[s]!=arr[e])  // if the first and last elements are not equal, 
                            //then the unique element is at the start
        { 
            e--;  // decrement the end pointer to check the next element
            ans = arr[s];  // assign the unique element to ans
            // i=0, ans=0, arr[0]=1, ans=1
            // i=1, ans=1, arr[1]=2, ans=3
            
        }
        else if(arr[s]==arr[e]) // if the first and last elements are equal, 
                                //then the unique element is at the end
        {
            s++; // increment the start pointer to check the next element
            e=n-1;  // reset the end pointer to the last element
        }
    }

    //OR using bitwise XOR (^) operator
    // where a ^ a = 0 and a ^ 0 = a
    // so if we XOR all elements, the duplicate elements will cancel out each other
    // and the unique element will remain

    cout<<"the unique element is "<<ans;   
    
    for(int i=0; i<n; i++) 
    {
        ans = arr[i]^ans;  
        // i=0, ans=0, arr[0]=1, ans=1
        // i=1, ans=1, arr[1]=2, ans=3
        // i=2, ans=3, arr[2]=3, ans=0  
        // i=3, ans=0, arr[3]=4, ans=4
    }

    cout<<"the unique element is "<<ans; 

    return 0;
}