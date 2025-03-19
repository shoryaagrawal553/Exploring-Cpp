/*enter n 4
+ + + * 
+ + * *
+ * * *
* * * *
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    
    cout<<"enter n ";
    cin>>n;
    
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n-1; j++)
        {
            //cout<<"  ";  
            cout<<"+ ";
        }
        
        for(j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    // OR

    cout<<"enter n ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            //cout<<"  ";  
            cout<<"+ ";
        }

        for(j=1; j<=i; j++)
        {
            cout<<"* ";
        }   
        cout<<endl; 
    }

    return 0;
}