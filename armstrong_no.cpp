/* An Armstrong number is a number that is equal to the sum of its digits 
    raised to the power of the number of digits.
    Example: 153 = 1^3 + 5^3 + 3^3 = 153 */

#include<iostream>
#include<cmath>
using namespace std;

int count_digit (int num)  // or int countdigit (int n)
{// to count the number of digits

    int count;
    while(num!=0)
    {
        num= num/10;
        count++;
    }
    return count;
}

int check_as(int num)  // to calculate armstrong number 
{
    int count= count_digit(num);
    int ans=0;
    while(num!=0)
    {
        int rem = num%10;
        num= num/10;
        ans= (pow(rem, count))+ans;
    }

    return ans;
}

int main()
{
    int num; // temp, orig, count=0, ans=0;
    cout<<"enter ";
    cin>>num;


    // orig=num;
    // temp=num;

    // while(num!=0) // to count the number of digits
    // {
    //     num= num/10;
    //     count++;
    // }

    // while(orig!=0)  // to calculate armstrong number 
    // {
    //     int rem = orig%10;
    //     orig= orig/10;
    //     ans= (pow(rem, count))+ans;
    // }

    int ans= check_as(num);

    if(ans == num)
    {
        cout<<num<<" is an armstrong number ";
    }
    else
    {
    cout<<num<<" is not an armstrong number ";
    }

    return 0;
}