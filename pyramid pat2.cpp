/*enter 4
      1 
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1  */

#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout<<"enter ";
    cin>>n;

    for(i=1; i<=n; i++) // for rows
    {
        for(j=1; j<=n-i; j++)  // for spaces
        {
            // i=1 => j=1 to 4-1=3 => 3 times => 3 spaces
            // i=2 => j=1 to 4-2=2 => 2 times => 2 spaces
            cout<<"  ";
        }

        for(j=1; j<=i; j++)  //for foreward counting (ascending order)
        {
            // i=1 => j=1 to 1 => 1 time => 1
            // i=2 => j=1 to 2 => 2 times => 1 2
            cout<<j<<" ";
        }

        for(j=i-1; j>=1; j--)  //for backward counting (descending order)
        {
            // i=1 => j=1-1=0 to 1 => 1 time => 1
            // i=2 => j=2-1=1 to 1 => 1 time => 2 1
            cout<<j<<" ";
        }

        cout<<endl;
    }

    return 0;
}