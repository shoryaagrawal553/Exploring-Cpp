// power of 2
//An integer n is a power of two, if there exists an integer x such that n=2^x.
// n=1 = 2^0, n=2 = 2^1, n=4 = 2^2...

#include <iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cout<<"Enter a number ";
    cin>>n;
    
    for(int i=0; i<=n/2; i++)  // using loop
    {
        if(n== pow(2,i))
        {
            cout<<n<<" is a power of 2";
            return 0;
        }
    }

    cout<<n<<" is not a power of 2";

// have to write using recursion also


//  OR

    int original = n; // Store the original value of n

    if (n<=0)
    {
        cout << original << " is not a power of 2";
        return 0;
    }
    while (n != 1)
    {   
        if (n % 2 == 1)
        {
            cout << original << " is not a power of 2";
            return 0;
        }
        else
        {
            n = n / 2;
        }
    }   
    cout << original << " is a power of 2";

    return 0;
}