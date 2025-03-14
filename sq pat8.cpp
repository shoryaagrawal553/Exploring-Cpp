/*enter 3
1 4 9 
16 25 36
49 64 81*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i, j, n;
    cout<<"enter ";
    cin>>n;

    int num= 1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            //cout<<num*num<<" ";
            cout<<pow(num,2)<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}