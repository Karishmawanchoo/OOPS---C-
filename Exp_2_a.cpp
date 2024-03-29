/* To allocate the appropriate access specifiers to a data members of student and course class?*/

#include<iostream>
#include<vector>
using namespace std;

class student {
private:
    int id;
    string name;
    float gpa;

public:
    student(int id, string name, float gpa);
    int get_id() const; 
    string get_name() const; 
    float get_gpa() const; 
    void set_gpa(float new_gpa);
};

class course {
private:
    string name;
    int id;
    vector<student> students;

protected:
    float average_gpa() const; 

public:
    course(string name, int id);
    void add_student(const student& s); 
    vector<student> get_students() const; 
    float get_average_gpa() const; 
};

student::student(int id, string name, float gpa) : id(id), name(name), gpa(gpa) {}

int student::get_id() const {
    return id;
}

string student::get_name() const {
    return name;
}

float student::get_gpa() const {
    return gpa;
}

void student::set_gpa(float new_gpa) {
    gpa = new_gpa;
}

course::course(string name, int id) : name(name), id(id) {}

void course::add_student(const student& s) {
    students.push_back(s);
}

vector<student> course::get_students() const {
    return students;
}

float course::average_gpa() const {
    float sum = 0;
    for (const student& s : students) {
        sum += s.get_gpa();
    }
    return sum / students.size();
}

float course::get_average_gpa() const {
    return average_gpa();
}

int main() {
    student Karishma(2, "Prachi Sharma", 8.3);
    course cs101("CS101", 101);
    cs101.add_student(Karishma);
    cout<< "Students in CS101:"<< endl;
    vector<student> students = cs101.get_students();
    for(const student& s : students) {
        cout << "Student ID:" << s.get_id() << endl;
        cout << "Student Name:" << s.get_name() << endl;
        cout << "Student GPA:" << s.get_gpa() << endl;
        cout << endl;
    }
    float avg_gpa = cs101.get_average_gpa();

    cout << "Average GPA of students in CS101: " << avg_gpa << endl;
    
    return 0;
}
