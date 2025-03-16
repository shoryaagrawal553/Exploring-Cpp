/*enter 4
A 
B A
C B A
D C B A*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter ";
    cin>>n;
    // char i, j;

    // for(i='A'; i<'A'+n; i++)
    // {
    //     for(j=i; j>='A'; j--)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl; 
    // }

    //   OR 

    int i,j;

    for (i=0; i<n; i++)
    {
        for (j=i; j>=0; j--)
        {
            cout<<char('A'+j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}
