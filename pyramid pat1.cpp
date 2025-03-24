/*enter 4
      * 
    * * * 
  * * * * *
* * * * * * *   */ 

#include<iostream>
using namespace std;
int main()
{
    int n, i, j;

    cout<<"enter ";
    cin>>n;

    int x=0;
    for(i=1; i<=n; i++) 
    {
        for(j=1; j<=n-i; j++)
        {
            // i=1 => j=1 to 4-1=3 => 3 times => 3 spaces
            // i=2 => j=1 to 4-2=2 => 2 times => 2 spaces

            cout<<"  "; // two spaces because in printing the patternthere are teo characters 
        }               // one is star and a space after that
                        // so to maintain the space between the stars we need to print two spaces

        for(j=1; j<=i+x; j++)  //where x= 0,1,2,3,4...
        {
            // i=1 => j=1 to 1+0=1 => 1 time => 1 star
            // i=2 => j=1 to 2+1=3 => 3 times => 3 stars

            cout<<"* ";  // star and a space after that
        }                // and if we remove the space after the star then 
                        // it will be printed in a straight line like a mirrored right triangle

        cout<<endl;
        x++;
    }


    // OR (better approach without using x)

    cout<<"enter "; 
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            // i=1 => j=1 to 4-1=3 => 3 times => 3 spaces
            // i=2 => j=1 to 4-2=2 => 2 times => 2 spaces

            cout<<"  ";
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            // i=1 => j=1 to 1*2-1=1 => 1 time => 1 star
            // i=2 => j=1 to 2*2-1=3 => 3 times => 3 stars

            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}
