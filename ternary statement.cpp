#include <iostream>
using namespace std;

int main()
{
    // condition ? stt1 : stt2;
    // stt1 = if condition is true, stt2 = else or if condition is false

    int n = 54; // Initialize variable n with value 54
    // Using ternary operator to check if n is positive or negative
    cout << (n > 0 ? "positive" : "negative") << endl;
    return 0; // Return 0 to indicate successful execution
}
