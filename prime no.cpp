#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"input ";
    cin>>n;
    if(n>1){
    for(i=2; i<n; i++)
    {
    if(n%i==0) 
    {
    cout<<n<<" is not prime";
    break;
    }
    else 
    {
        cout<<n<<" is prime";     // odd no. wiil output this because in the first iteration 
        break;                    // the no. isn't divisble by 2 then the else statement will be executed
    }                             // and the loop will not continue because of break keyword
    }                             // the issue will arise at odd non primes like 21, 9
    }
    else 
    {
        cout<<"invalid input";
    }
}