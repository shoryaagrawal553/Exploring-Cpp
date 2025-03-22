/*enter 4
* * * * * * * 
  * * * * *
    * * *
      *   */

#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout<<"enter ";
    cin>>n;

    for(i=1; i<=n; i++) // row= 1, 2, 3, 4
    {
        for(j=1; j<=i-1; j++)  // Spaces
        {
            // i=1 => j=1 to 1-1=0 => 0 times => no space (n=5)
            // i=2 => j=1 to 2-1=1 => 1 time => 1 space (n=5)
            cout<<"  ";
        }
        
        // for(j=1; j<=(n*2)-((i*2)-1); j++)  // stars
        // {
        //     // i=1 => j=1 to 5*2-((1*2)-1)=9 => 9 times => 9 stars (n=5)
        //     // i=2 => j=1 to 5*2-((2*2)-1)=7 => 7 times => 7 stars (n=5)
        //     cout<<"* ";
        // }

        //or  
        for(j=n*2; j>i*2-1; j--)  //stars
        {
            // i=1 => j=10 to 1*2-1=1 => 9 times => 9 stars (n=5)
            // i=2 => j=10 to 2*2-1=3 => 7 times => 7 stars (n=5)
            cout<<"* ";
        }

        cout<<endl;
    }

    //OR 

    cout<<"enter ";
    cin>>n;

    for(i=n; i>=1; i--)  // row= n,...,3, 2, 1
    {
        for(j=1; j<=n-i; j++)   // or for(j=i; j<=n-i; j++)  // spaces
        {
            // i=5 => j=1 to 5-5=0 => 0 times => no space (n=5)
            // i=4 => j=1 to 5-4=1 => 1 time => 1 space (n=5)
            cout<<"  ";
        }

        for(j=1; j<=i*2-1; j++)  // or for(j=i*2-1; j>=1; j--0)  // stars
        {
            // i=5 => j=1 to 5*2-1=9 => 9 times => 9 stars (n=5)
            // i=4 => j=1 to 4*2-1=7 => 7 times => 7 stars (n=5)
            cout<<"* ";
        }

        cout<<endl;
    }
}