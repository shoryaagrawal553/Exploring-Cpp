#include<iostream>
using namespace std;

// bi-directional association

class Student; // forward declaration

class Teacher  
{
    public:
    string name;

    Teacher (string n)
    {
        name=n;
    }

    void display(Student &s); 
    // {
    //     cout<<"Teacher class \n";
    //     cout<<name<<" teacher "<<s.name<<endl;
    // }
};

class Student
{
    public: 
    string name;

    Student (string n)
    {
        name=n;
    }

    void display(Teacher &t) 
    {
        cout<<"\nStudent class \n";
        cout<<name<<" is taught by "<<t.name<<endl;
    }
};

// Definition of Teacher::display after Student class is fully defined
void Teacher:: display(Student &s)
    {
        cout<<"Teacher class \n";
        cout<<name<<" teaches "<<s.name<<endl;
    }

int main()
{
    Teacher teach("Mr. xyz"); 
    Student stu("Anil");  

    teach.display(stu); 
    stu.display(teach); 

    return 0;
}