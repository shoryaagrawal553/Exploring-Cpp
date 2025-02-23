#include <iostream>
using namespace std;
int main()
{
    int n, i, flag=0;
    cout<<"input ";
    cin>>n;
    if(n>1)
    {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                cout<<n<<" is not prime";
                flag++;
                break;
            }
    // else 
    // {
    //     cout<<n<<" is prime";     
    //     break;                    
    // }                             
        }
        if (flag==0)
        {
            cout<<n<<" is prime ";
        }
    }
    // else 
    // {
    //     cout<<"invalid input";
    // }

    return 0;

}
