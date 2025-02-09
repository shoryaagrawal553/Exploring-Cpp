#include<iostream>
using namespace std;

int main()
{
    int a[5]={55,65,22,31,43};
    int i;
    int min= a[0], max=a[0];

    for(i=1; i<5; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        else if(a[i]>max)
        {
            max=a[i];
        }
    }

    cout<<"Min value is: "<<min;
    cout<<"\nMax value is: "<<max;
}