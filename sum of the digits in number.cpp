#include<iostream>
using namespace std;
int main()
{
    int n, x, y=0;
    cout<<"input: ";
    cin>>n;
    int original_n=n;
    while(n>0)
    {
        x=n%10;
        n=n/10;
        y+=x;
    }
    cout<<"The sum of the digits of "<<original_n<<" is "<<y;
    return 0;
}