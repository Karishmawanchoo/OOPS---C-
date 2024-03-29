/*Write a program to create base class1 and a function with name display1() which displays a Welcome message,
create derived class1 and a function with name display2() which displays welcome message with user information
name and registration number, display2() function return registration number to display3() function.
Create derived class 2 and a function with name display3() which shows group for lab according to registration
number accepted from display2() function.
Create derived class 3 with function display4() which prints Bye message on screen.
Derived class 1 and derived class 2 extends from Base class1,
Derived class 3 extends from Derived class 1 and class 2?  */

#include<iostream>
using namespace std; 

class BaseClass1{
public:
    void display1(){
        cout << "Welcome to the program" << endl;
    }
};

class DerivedClass1 : public BaseClass1 {
public:
    int display2(string name, int reg_no) {
        cout << "Welcome, " << name << " with registration number: " << reg_no << endl;
        return reg_no;
    }
};
class DerivedClass2 : public BaseClass1 {
public:
      void display3(int reg_no) {
        if (reg_no < 100) {
            cout << "Your Lab Group is G5" << endl;
        } 
        else {
            cout << "Your lab group is G6" << endl;
        } 
    }
};

class DerivedClass3 : public BaseClass1 {
public:
         void display4() {
            cout << "Bye!!!!" << endl;
        }
};

int main() {
    DerivedClass3 obj;
    int reg_no = obj.display2("Karishma Wanchoo", 82);
    obj.display1();
    obj.DerivedClass2::display3(reg_no); 
    obj.display4();
    return 0;
}















