/*enter 4
*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
* * *     * * * 
* *         * * 
*             *     */

#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"* ";
        }

        for(j=1; j<=(2*n)-(2*i); j++)
        {
            cout<<"  ";
        }

        for(j=1; j<=i; j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(i=n-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"* ";
        }

        for(j=1; j<=(2*n)-(2*i); j++) // spaces
        {
            cout<<"  ";
        }

        for(j=1; j<=i; j++)// stars
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
}