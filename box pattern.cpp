#include<iostream>
using namespace std;
int main()
{
    int i,j;

    // cout<<"for printing 5 stars in n lines/rows\n";
    // int n= 3;
    // for(i=1; i<=n; i++)  //for printing 5 stars in n lines/rows
    // {
    //     cout<<"*****";
    //     cout<<endl;  //to get to next line
    // }

    // cout<<"for printing n stars per line\n";
    // n=5;
    // for(i=1; i<=n; i++) //for printing n stars per line
    // {
    //     cout<<"* ";
    // }

    // cout<<"\nfor printing n stars in n lines\n";
    n=3;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<"* ";    
        }
        cout<<endl;
    }

    return 0;
}