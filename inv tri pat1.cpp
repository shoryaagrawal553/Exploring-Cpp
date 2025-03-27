/*enter 4
A A A A 
  B B B 
    C C 
      D   */

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout<<"enter ";
    cin>>n;

    //char ch='A';

    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)// spaces
        {
            cout<<"  ";
        }

        for(j=1; j<=n-i+1; j++)
        {
            //cout<<ch<<" ";
            cout<<char('A'+i-1)<<" "; // i=1 => A+1-1= A; i=2 => A+2= C-1= B
        }

        cout<<endl;
       // ch++;
    }
    return 0;
}