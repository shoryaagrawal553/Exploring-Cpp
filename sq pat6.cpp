/*enter 3
3 2 1 
3 2 1 
3 2 1 */

#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=n; j>=1; j--)
        {
            cout<<j<<" ";
        }

        //  OR
        // int num=5;
        // for (j=1; j<=n; j++)
        // {
        //     cout<<num<<" ";
        //     num--;
        // }

        cout<<endl;
    }

    return 0;
}