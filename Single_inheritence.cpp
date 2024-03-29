#include<iostream>
using namespace std;

class Parent 
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

class Child: public Parent
{
    private:
       int m1, m2;

    public:
       void sub() {

        cout << "\n Enter two number";
        cin >> m1 >> m2;
        cout << "\n Sub = " << m1-m2;
       }
};

int main () {
    Child obj;
    obj.sum();
    obj.sub();
    return 0;
}