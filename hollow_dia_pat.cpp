/*enter 4
      *       
    *   *     
  *       *   
*           * 
  *       *   
    *   *     
      *     */

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout<<"enter ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(j=1; j<= n-i-1; j++) // spaces
        {
            cout<<"  ";
        }
        cout<<"* ";

        for(j=1; j<=i*2-1; j++) // inner spaces
        {
            cout<<"  ";
        }

        if(i!=0)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(i=n-2; i>=0; i--)
    {
        for(j=1; j<= n-i-1; j++) // spaces
        {
            cout<<"  ";
        }
        cout<<"* ";

        for(j=1; j<=i*2-1; j++) // inner spaces
        {
            cout<<"  ";
        }

        if(i!=0)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
}