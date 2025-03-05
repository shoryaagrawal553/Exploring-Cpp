#include <iostream>
using namespace std;

class Example
{
private:
    int a, b;

public:
    Example()
    {
        a = 2;
        b = 3;
        cout << "default constructor \n";
    }

    Example(int x, int y)
    {
        a = x;
        b = y;
        cout << "Parameterized constructor\n"; //\nSum is : "<<x+y;
    }

    Example(Example &ex)
    {
        a = ex.a;
        b = ex.b;
        cout << "copy constructor \n"; // Sum is : "<<ex.a+ex.b;
    }

    void sum()
    {
        cout << "Sum of " << a << " and " << b << " is: " << a + b << endl;
    }
};

int main()
{
    Example example1;
    Example example2(1, 4);
    Example example3 = example2;

    example1.sum();
    example2.sum();
    example3.sum();
    return 0;
}