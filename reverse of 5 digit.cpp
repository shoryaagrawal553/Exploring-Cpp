#include<iostream>
using namespace std;

class Reverse
{
    public:
    int n= 12345;

    public:
    void method()
    {
        int x, y=0, i;
        while (n>0)   //for(i=1; i<=5; i++)     // using while instead of for removes the
        {                                       // need to specify no. of digits manually 
        x=n%10;    // x = 12345 % 10 = 5
        n=n/10;    // n = 12345 / 10 = 1234
        y=(y*10)+x;   // y = (0 *10)+5 = 5   next y=(5*10)+4 = 50 + 4 = 54
        }
        cout<<y;
    }
};

int main()
{
    Reverse r;
    r.method();
}