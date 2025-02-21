#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"input: ";
    cin>>n;
    if(n>1)
    {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                cout<<n<<" is not prime";
                // break;   // it will only terminate the loop causing issues in odd non primes
                return 0;   // it will end the program if the condition is true
            }
        }
        cout<<n<<" is prime ";
    }
    else
    {
        cout<<"invalid input";
    }
    return 0;
}
