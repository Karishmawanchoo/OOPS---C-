/*To add the details of a student using a parametrized constructor of student class?*/

#include <iostream>
using namespace std;

class student {
private:
    string name;
    int age;

public:
    // Parametrized constructor
    student(string n, int a) {
        name = n;
        age = a;
    }

    
    void display_details() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    
    student obj("Prachi", 19);

    
    obj.display_details(); 

    return 0;
}