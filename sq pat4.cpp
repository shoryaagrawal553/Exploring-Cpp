/*n=3
A B C 
D E F
G H I*/

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
        for(j=1; j<=n; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    return 0;
}