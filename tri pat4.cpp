/*enter 3
1 
1 2
1 2 3  */

#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout<<"enter ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}