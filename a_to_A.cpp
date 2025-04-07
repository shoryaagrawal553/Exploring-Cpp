#include <iostream>
using namespace std;

char convert(char value)
{
   // return value-32;  // a=97, A=65  97-65=32
    return value-'a'+'A';   // value-a to obtain how much ahead the value is from a
                            // then add A to get the value of A
}                           // eg value=d => d-a=3 => A+3=68 => D

int main()
{
    char val;
    cout<<"enter the character ";
    cin>>val;
    cout<<convert(val);
    return 0;
}
