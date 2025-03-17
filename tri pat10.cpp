/* enter 4
1 2 3 4 
1 2 3
1 2
1  */

#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter ";     
    cin>>n; 

    for(i= 1; i<=n; i++)
    {
        for(j=1; j<=(n-i+1); j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    //   OR

    cout<<"enter ";
    cin>>n;

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // cout<<"enter ";     
    // cin>>n; 
    // for(i=1; i<=n; i++)
    // {
    //     int num=1;
    //     for(j=n; j>=i; j--)
    //     {
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    return 0;
}