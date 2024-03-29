#include<iostream>
using namespace std;
class Example 
{

    public: 
    Example(String name, int id){

        cout << "Welcome"<<name;
        cout << "\nYour Id is" << id
    }
};

int main() {

    Example ob('ABC', 1001);
    return 0;
}