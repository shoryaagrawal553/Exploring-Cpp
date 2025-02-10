#include <iostream>
#include<string>
using namespace std;

int main() 
{
    string text = "hello world";

    for (int i = 0; i < text.length(); i++) {
        for (int j = 0; j <= i; j++) {
            cout << text[j];

            if (j==text[1])
            {
                for(char k=97; )
            }
        }
        cout << endl;
    }

    return 0;
}
