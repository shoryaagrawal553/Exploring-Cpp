/*enter 3   (square of numbers)
1 4 9 
1 4 9 
1 4 9 */

#include<iostream>
using namespace std;

int main()
{
    int i, j, n; 

    cout<<"enter ";
    cin>>n; 

    for(i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            cout<<j*j<<" ";
        }
        cout<<endl;
    }

    return 0;
}