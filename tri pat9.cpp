/*enter 4
4 3 2 1 
4 3 2
4 3
4  */

#include<iostream>
using namespace std;
int main ()
{
    int i, j, n;
    
    cout<<"enter ";     
    cin>>n; 
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}