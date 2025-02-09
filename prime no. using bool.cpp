#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "enter ";
    cin >> n;
    bool isprime=true;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout<< n << " is not prime";
            isprime = false;
            break;
        }
    }

    if(isprime == true)
    {
        cout<< n << " is prime";
    }

    return 0;
}