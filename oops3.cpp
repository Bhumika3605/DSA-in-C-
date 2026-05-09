#include <iostream>
using namespace std;

// Base class
class Student {
    protected:
    string name;
    int rollno;

    public:
    void getData() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollno;
    }
};

// Derived class
class Result : public Student {
    private:
    int marks;

    public:
    void getMarks() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nStudent Details";
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << rollno;
        cout << "\nMarks: " << marks;
    }
};

int main() {

    Result obj;

    obj.getData();
    obj.getMarks();
    obj.display();

    return 0;
}
