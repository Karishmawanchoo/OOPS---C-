#include<iostream>
using namespace std;

int add(int a, int b );
 

int main() {
   
    int a = 25 , b=45;
    int sum = add(a,b);


    cout<<"SUM"<<sum<<endl;


    return 0;
}

 int add(int a , int b ){
 return a+b;
 }