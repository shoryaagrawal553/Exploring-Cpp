/*enter 4
1 1 1 1 
  2 2 2 
    3 3 
      4   */

#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout<<"enter ";     
    cin>>n;

    for(i=1; i<=n; i++) 
    {
        for(j=1; j<i; j++)
        {
            cout<<"  ";
        }

        for(j=1; j<=n-i+1; j++) // or for(j=i; j<=n; j++)
        {   // i=1 => j=1 to 4-1+1=4 => 1 1 1 1; 
            //i=2 => j=1 to 4-2+1=3 => 2 2 2; 
            //i=3 => j=1 to 4-3+1=2 => 3 3; 
            //i=4 => j=1 to 4-4+1=1 => 4
            
            cout<<i<<" ";
        }

        cout<<endl;
    }
}