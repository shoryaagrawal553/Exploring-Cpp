#include <iostream>
using namespace std;

int main()
{
    int n, rem, bino=0, pow=1;
    cout<<"Enter the decimal number ";
    cin>>n;
    int orig=n;
    while (n>0)
    {
        rem=n%2;
        n=n/2;
        bino=(rem*pow)+bino;
        pow*=10;
    }

    cout<<"binary of "<<orig<<" is "<<bino;

    return 0;
}
/*Iteration 1:
rem = n % 2 = 3 % 2 = 1
n = n / 2 = 3 / 2 = 1
bino = (rem * pow) + bino = (1 * 1) + 0 = 1
pow = pow * 10 = 1 * 10 = 10

Values after Iteration 1:
n = 1
rem = 1
bino = 1
pow = 10

Iteration 2:
rem = n % 2 = 1 % 2 = 1
n = n / 2 = 1 / 2 = 0
bino = (rem * pow) + bino = (1 * 10) + 1 = 11
pow = pow * 10 = 10 * 10 = 100

Values after Iteration 2:
n = 0
rem = 1
bino = 11
pow = 100
Loop Ends:
The loop ends because n = 0.

Final Output:
The binary representation of 3 is 11. The program prints:

*/