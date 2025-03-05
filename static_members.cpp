#include <iostream>
using namespace std;

class Counter  // class to count the objects
{
private:
    static int count;   // static var to count the objects

public:
    Counter() // default constructor to increment the count
    {
        count++; // count will increment on every constructor
                 // i.e. object creation of this class
    }

    static void showCount() // to print the counts of objects
    {
        cout << "The count of objects is : " << count << endl;
    }
};

int Counter ::count = 0; // static var must be initialized outside the class definition

int main()
{
    Counter ::showCount(); // static function does not need object for calling 

    Counter obj1; 
    Counter obj2;
    Counter obj3;

    Counter ::showCount();   

    reutrn 0;
}