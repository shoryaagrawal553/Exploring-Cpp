/*enter 3
1 
2 1
3 2 1 */

#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout<<"enter ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=i; j>0 /*j>=1*/; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}