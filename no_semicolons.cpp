#include <iostream> 
using namespace std; 
int main()
{
    // Print "Helloooo!!" using the cout object inside an if statement
    if(cout<<"Helloooo!!\n"){}

    // Print "Helloooo!!!" using the cout object inside a switch statement
    switch (cout<<"Helloooo!!!", 0){}

    return 0; // Return 0 to indicate successful execution
    // return statement can also be ommitted because it 
    // is the last statement in the main function 
    // and the compiler will automatically insert it
    // if it is not present because the main function 
    // is of type int
}
