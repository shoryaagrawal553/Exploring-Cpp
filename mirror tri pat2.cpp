/* enter n 4
      1
    2 2
  3 3 3
4 4 4 4
*/

#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout<<"enter n ";
    cin>>n;
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)  // OR  for(j=i; j<=n-1; j++)
        {
            cout<<"  ";
        }

        for(j=1; j<=i; j++)   // OR  for(j=n; j>=n-i+1; j--)
        {
            cout<<i<<" ";
        }

        cout<<endl;
    }

    return 0;
}
