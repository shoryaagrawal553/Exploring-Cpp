#include <iostream>
using namespace std;

int main()
{
    int n, rem, pow1=1, decno=0;
    cout<<"enter the binary number ";
    cin>>n;

    while(n>0)
    {
        rem= n%10;
        n=n/10;
        decno=(rem*pow1)+decno;
        pow1*=2;
    }
    cout<<decno;
    return 0;
}