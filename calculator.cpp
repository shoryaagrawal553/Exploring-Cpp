#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char s;
    cout<<"enter your input";
    cin>>a>>s>>b;
    switch (s)
    {
        case '+':
        cout<<"= "<<a+b;
        break;
        case '-':
        cout<<"= "<<a-b;
        break;
        case '*':
        cout<<"= "<<a*b;
        break;
        case '/':
        if(b!=0){
            cout<<"= "<<a/b;
        }
        else{
            cout<<"infinity ";
        }
        break;
        default:
        cout<<"wrong input";
        break;
    }
    return 0;
}