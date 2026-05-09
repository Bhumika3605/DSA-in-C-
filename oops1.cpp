#include <iostream>
using namespace std;

  //encapsulation and abastraction
  class Student{
    private:
    //properties
    string name;
    int age;
    int rollno;
     public:
     
     void setter(string n, int a,int r)
     {
       name =n;
       age = a;
       rollno = r;
     }
     int getter(){
       return age;
     }
  };
      int main()
      {
        Student obj;
        obj.setter("bhumika", 25,10);
        cout<<obj.getter();
        
          return 0;
        
      }
