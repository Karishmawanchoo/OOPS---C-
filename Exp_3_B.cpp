/*write a program to delete the details of the student class using a member function of student class?*/
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
        cout << "Name: " << name << "\n Age: " << age << endl;
    }

   
    void delete_details() {
        name = "NA";
        age = 0;
    }
};

int main() {
    
    student obj("Karishma Wanchoo", 19);

    obj.display_details(); 
    obj.delete_details();
    obj.display_details(); 

    return 0;
}