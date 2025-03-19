/*enter 4
      A 
    A B 
  A B C 
A B C D   */

#include<iostream>
using namespace std;
int main()
{
    int n, i, j;

    cout<<"enter ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }
                            //  OR
        char ch='A';         //char j;
        for(j=1; j<=i; j++)  // for(j='A'; j<=ch+i-1; j++)
        {                    // {
            cout<<ch<<" ";   //     cout<<j<<" ";
            ch++;           //  }
        }

        cout<<endl;
    }

    return 0;
}