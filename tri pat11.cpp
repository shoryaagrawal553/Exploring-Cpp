/*enter 4
4 
4 3
4 3 2
4 3 2 1  */

#include<iostream>
using namespace std;

int main()
{
    int n, i, j;

    cout<<"enter ";
    cin>>n; 

    for(i=1; i<=n; i++)
    {
        for(j=n; j>= n-(i-1); j--)
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
        for(j=n; j>=i; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}