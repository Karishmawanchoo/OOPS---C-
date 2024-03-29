/*Program to create a base class with function accept_data() which accepts Student name and percentage,
return percentage when we call this function,
create derived class1 with function sciuence stream() which accepts percentage from base class and shows eligibility
for the stream if percentage is greater than 70.
Create derived class2 with function humanity_stream() which accepts percentage from base class and shows eligibilty
for the stram if percentage is between 50 to 70.?*/

#include<iostream>
using namespace std;
class BaseClass {
    private:
     string studName;
    float per;

    public:
    float accept_data() {
     cout << "Enter Student Name";
     cout << " and Enter Percentage" << endl;
     cin >> studName;
     cin >> per;
     return per;
    }
   
};

class DerivedClass1 : public BaseClass {
    public:
    void science_stream(float per){
        if(per > 70){
            cout << "Student is Eligible for Science stream" << endl;
        }
        else{
            cout<< "Student is not Eligible for Science stream" << endl;
        }
    }
};

class DerivedClass2 : public BaseClass {
    public:
     void humanities_stream(float per) {
        if(per <=50 && per <70 ) {
          cout << "Student is Eligible for Humanity stream" << endl;
        }
        else{
            cout << "Student is not Eligible for Humanity stream" << endl;
        }
    }  
};

int main() {

    DerivedClass1 obj1;
    DerivedClass2 obj2;
    string studName;
    float per;
    per =obj1.accept_data();
    obj1.science_stream(per);
    obj2.humanities_stream(per);
    return 0;
    
}
