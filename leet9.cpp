// palindrome number
// A palindrome number is a number that remains the same when its digits are reversed. For example, 121, 12321, and 45654 are palindrome numbers.
// a -ve no. can't be a palindrome no. -121 == 121- (when rervresed)
#include <iostream>
using namespace std;

int main()
{
    int n, rem, rev=0, orig;
    
    cout<<"enter a number ";
    cin>>n;
    orig=n;

    if(n<0)
    {
        cout<<orig<<" is not a palindrome";
        return 0;
    }
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        rev=(rev*10)+rem;
    }
    if(orig==rev)
    {
        cout<<orig<<" is a palindrome";
        return 0;
    }

    cout<<orig<<" is not a palindrome";
    return 0;
}

    /* if(ans>INT_MAX/10) // check for overflow
            {
                return 0;
            }*/