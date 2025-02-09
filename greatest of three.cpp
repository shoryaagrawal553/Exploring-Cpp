#include<iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout<<"Enter three numbers ";
  cin>>a>>b>>c;
  if(a>b && a>c)
  {
    cout<<" A is greatestt";
  }
  else{
    if(b>c)
    { cout<<"B is greatest ";}
    else{
      cout<<"C is greatest";
    }
  }
}