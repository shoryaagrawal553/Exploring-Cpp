/*enter 4
A 
B B
C C C
D D D D */

#include<iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout<<"enter ";
    cin>>n;

    char ch='A';
    for(i=1; i<=n; i++)
    {
        for(j=1; j<i+1; j++)     // j<=i
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }

    return 0;
}