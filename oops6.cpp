#include <iostream>
using namespace std;

// Parent Class
class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
    }
};

// Child Class 1
class Student : public Person {
private:
    int rollno;

public:
    Student(string n, int r) : Person(n) {
        rollno = r;
    }

    void displayStudent() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

// Child Class 2
class Teacher : public Person {
private:
    int salary;

public:
    Teacher(string n, int s) : Person(n) {
        salary = s;
    }

    void displayTeacher() {
        cout << "Teacher Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {

    Student s1("Bhumika", 101);
    Teacher t1("Riya", 50000);

    cout << "Student Details " << endl;
    s1.displayStudent();

    cout << endl;

    cout << "Teacher Details" << endl;
    t1.displayTeacher();

    return 0;
}
