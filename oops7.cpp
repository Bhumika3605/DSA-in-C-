#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;

public:
    // Constructor
    Complex(int real, int img) {
        this->real = real;
        this->img = img;
    }

    /***********Default constructor (Default constructor is important
    here because Complex ans; creates an object without passing argument******************/
    Complex() {
        real = 0;
        img = 0;
    }

    // Operator Overloading
    Complex operator+(const Complex &c) {
        Complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }

    void display() {
        cout << real << " + i" << img << endl;
    }
};

int main() {
    Complex c1(3, 2);
    Complex c2(3, 3);

    Complex c3 = c1 + c2;

    c1.display();
    c2.display();
    c3.display();

    return 0;
}
