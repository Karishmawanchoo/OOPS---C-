//write a program to update the details of the student class using a member function of student class
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    string course;
public:
    // Constructor
    Student(string n, int a, string c) : name(n), age(a), course(c) {}

    void updateDetails(string newName, int newAge, string newCourse) {
        name = newName;
        age = newAge;
        course = newCourse;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student student1("Karishma wanchoo", 19 , "Computer Science");

    cout << "Initial Details:" << endl;
    student1.displayDetails();
    student1.updateDetails("Vansh Bargotra", 19 , "Mathematics");
    cout << "\n Updated Details:" << endl;
    student1.displayDetails();

    return 0;
}