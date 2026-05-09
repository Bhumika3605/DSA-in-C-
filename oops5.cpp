#include <iostream>
using namespace std;

// Multiple Inheritance

class Human
{
protected:
    string name;
};

class Person
{
protected:
    int age;
};

class Student : public Human, public Person
{
    int rollno;

public:
    // Constructor
    Student(string n, int a, int r)
    {
        name = n;
        age = a;
        rollno = r;
    }

    // Display function
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main()
{
    Student obj("Bhumika", 21, 21);

    obj.display();

    return 0;
}
