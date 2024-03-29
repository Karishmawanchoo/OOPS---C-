/*Analyse and design classes for student management system.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{
private:
    string name;
    int age;
    string grade;

public:
    Student(string n, int a, string g) : name(n), age(a), grade(g) {}
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setGrade(string g)
    {
        grade = g;
    }
    string getName() const
    {
        return name;
    }
    int getAge() const
    {
        return age;
    }
    string getGrade() const
    {
        return grade;
    }

    void displayinfo() const
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Grade:" << grade << endl;
    }
};

class StudentManagementSystem
{
private:
    vector<Student> students;

public:
    void addStudent()
    {
        string name, grade;
        int age;
        cout << "Enter Student name:"<< endl;
        getline(cin, name);
        cout << "Enter Student Age:" << endl;
        cin >> age;
        cout << "Enter Student grade:" << endl;
        cin >> grade;
        cin.ignore();
        students.push_back(Student(name, age, grade));
    }
  void displayallStudents() const
  {
    for (const auto& student : students)
    {
       student.displayinfo();
       cout<<endl;
    }
  }
};

int main()
{
    StudentManagementSystem system;
    char choice;
    do
    {
        cout << "1. Add Students\n";
        cout << "2. Display All Students\n";
        cout << "3. Quit\n";
        cout << "Enter your choice:";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case '1':
            system.addStudent();
            break;
        case '2':
            system.displayallStudents();
            break;
        case '3':
            cout << "Exiting program.\n";
            break;
            cout << "Invalid choice. Please try again.";
        }
    } while (choice != '3');
    return 0;
}