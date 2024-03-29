#include<iostream>
using namespace std;

class Parent1
{
    private:
       int n1, n2;
       
    
    public:
       void sum() {
        cout << "Enter two number";
        cin >> n1 >> n2;
        cout << "\n Sum = " << n1 + n2;
       }
};

class Parent2
{
    private:
       int m1, m2;

    public:
       void sub() {

        cout << "\n Enter two number";
        cin >> m1 >> m2;
        cout << "\n Sub = " << m1 - m2;
       }
};

class Child : public Parent1 , public Parent2
{
    private:
       int z1, z2;

    public:
       void multi() {

        cout << "\n Enter two number";
        cin >> z1 >> z2;
        cout << "\n Multiplication = " << z1*z2;
    }
};


int main () {
    Child obj;
    obj.sum();
    obj.sub();
    obj.multi();
    return 0;
}