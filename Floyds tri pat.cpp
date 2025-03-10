/*enter 3
1 
2 3
4 5 6 */

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter ";
    cin>>n;

    int num=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}