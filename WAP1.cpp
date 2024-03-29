#include<iostream>
using namespace std;

class Student {
    public:
    Student(String name , int id, int marks) {
        cout << "Welcome";
        cin >> name;
        cout<< "\n Your Registration Id is:" ;
        cin >> id;
        cout <<"\n Marks=" ;
        cin >> marks;
    }
    
};

int main() {
    Student ob;
    Student ob1("Prachi", 179 , 400);
    Student ob2("Karishma", 82 , 300);
    Student ob3("Sushaivi", 62 , 350);
    Student ob4("Vansh", 95 , 450);
    Student ob5("Richi", 68 , 400);

    return 0 ;
}