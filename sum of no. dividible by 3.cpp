#include <iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"enter ";
    cin>>n;
    int i;
    for(i=1; i<=n; i++)
    {
        if(i%3==0)
        {
            sum=sum + i;
        }
    }
    cout<<sum;
    return 0;
}