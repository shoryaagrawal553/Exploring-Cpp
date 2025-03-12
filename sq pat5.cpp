/*enter 3
1 1 1 
2 2 2 
3 3 3 */

#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout<<"enter ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}