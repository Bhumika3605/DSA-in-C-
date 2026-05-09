#include <iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;
};

class Student : public Human
{
    protected:
    int rollno;

    public:

    Student(string n, int a, int r)
    {
        name = n;
        age = a;
        rollno = r;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main()
{
    Student obj1("bhumika", 21, 12);

    obj1.display();

    return 0;
}
