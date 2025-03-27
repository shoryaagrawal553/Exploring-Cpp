/* enter 4
      *   
    *   *
  *   *   *
*   *   *   *
  *   *   *
    *   *
      *    */

#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter "; 
    cin>>n;

    for(i=1; i<n; i++)
    {
        for(j=i; j<n; j++) //spaces
        { //i=1 => j=1 to 3 => 3 spaces; 
        //i=2 => j=2 to 3 => 2 spaces; i=3 => j=3 => 1 space
            cout<<"  "; // (a)1 character (space); (b)2 characters (spaces)
        }

        for(j=1; j<=i; j++)
        {//i=1 => j=1 => 1 star; i=2 => j=1 to 2 => 2 stars; i=3 => j=1 to 3 => 3 stars
            cout<<"*   "; //(a)=1 star and 1space; (b) =1 star with 1 space 
        }                                     // and 2 spaces for next space from above loop

        cout<<endl;
    }

    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++) //spaces
        { //i=4 => j=4 => 0 spaces; i=3 => j=3 to 4 => 1 space; i=2 => j=2 to 4 => 2 spaces
        //i=1 => j=1 to 4 => 3 spaces
            cout<<"  "; 
        }

        for(j=1; j<=i; j++) // stars
        { //i=4 => j=1 to 4 => 4 stars; i=3 => j=1 to 3 => 3 stars; i=2 => j=1 to 2 => 2 stars
        //i=1 => j=1 => 1 star
            cout<<"*   "; 
        }

        cout<<endl;
    }


    return 0;
}