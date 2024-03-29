#include<iostream>
using namespace std;

class Amount {
    public:
    Amount() {
        cout << "Your Account Balance is zero";


    }
    Amount(float amt){

        cout << "\n Your Account Balance is:"<<amt;
    }
    
};

int main() {

    Amount ob;
    Amount ob1(20000);
    return 0;
}