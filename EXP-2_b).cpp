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

    // Function to display the student's name and age
    void display_details() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create a new student object with name "John Doe" and age 18
    student obj("Karishma", 18);

    // Display the student's details
    obj.display_details(); // Name: John Doe, Age: 18

    return 0;
}