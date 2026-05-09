#include <iostream>
using namespace std;

  //function overloading
  class Student{
    private:
    //properties
    string name;
    int age;
    int rollno;
     public:
     int area(int l, int r){
       return (l*r);
     }
      int area (int r){
        return (r*r);
      }
     
     
  };
      int main()
      {
        Student obj;
        cout<<"rectangle area"<<obj.area(3,4);
        cout<<"square area"<<obj.area(3);
        
          return 0;
        
      }
