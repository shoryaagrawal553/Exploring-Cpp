/*enter 4
* * * * * * * * 
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * * 
* * * * * * * *    */

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, j2, j3;
    cout << "enter ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++) // or for(j=n; j>=i; j--)
        {
            cout<<"* ";
        }

        for(j2=1; j2<=(i*2)-2; j2++) //spaces
        // i=1 => j2=1 to 1*2-2=0 => 0 times => no space        
        // i=2 => j2=1 to 2*2-2=2 => 2 times => 2 spaces
        {
            cout<<"  ";
        }

        for(j3=i; j3<=n; j3++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<= i; j++) // stars
        {
            cout<<"* ";
        }

        for(j2=1; j2<=(2*n)-(2*i); j2++) // spaces
        {// i=1 => j2=1 to 2*4-2=6 => 6 times => 6 spaces
        // i=2 => j2=1 to 2*4-4=4 => 4 times => 4 spaces

            cout<<"  ";
        }

        for(j=1; j<= i; j++) // stars
        {
            cout<<"* ";
        }

        cout<<endl;
    }
                    // OR


    int row, col;
    cout<<"Enter the input: ";
    cin>>n;
    for(row=n; row>=1; row--)
    {
        for(col=1;col<=row;col++) // stars
        {// i=5 => j=1 to 5 => 5 times => 5 stars
        // i=4 => j=1 to 4 => 4 times => 4 stars
            cout<<"* ";
        }

        for(col=1;col<=2*n-2*row; col++) // spaces
        { // i=5 => j=1 to 2*5-2*5=0 => 0 times => no space
        // i=4 => j=1 to 2*5-2*4=2 => 2 times => 2 spaces
            cout<<"  ";
        }

        for(col=1;col<=row;col++) // stars
        { // i=5 => j=1 to 5 => 5 times => 5 stars
        // i=4 => j=1 to 4 => 4 times => 4 stars
            cout<<"* ";
        }

            cout<<endl;
    }

    for(row=1; row<=n; row++)
    {
        for(col=1;col<=row;col++) // stars
        {// i=5 => j=1 to 5 => 5 times => 5 stars
        // i=4 => j=1 to 4 => 4 times => 4 stars
            cout<<"* ";
        }

        for(col=1;col<=2*n-2*row; col++) // spaces
        { // i=5 => j=1 to 2*5-2*5=0 => 0 times => no space
        // i=4 => j=1 to 2*5-2*4=2 => 2 times => 2 spaces
            cout<<"  ";
        }

        for(col=1;col<=row;col++) // stars
        { // i=5 => j=1 to 5 => 5 times => 5 stars
        // i=4 => j=1 to 4 => 4 times => 4 stars
            cout<<"* ";
        }

            cout<<endl;
    }

    return 0;
}