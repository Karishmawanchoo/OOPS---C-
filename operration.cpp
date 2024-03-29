#include<bits/stdc++.h>
using namespace std;

int add(int a , int b);
int subtract (int a , int b);
int multiply(int a , int b);
int divide (int a, int b);

int main() 
{
    int n,a,b;
    cout << "Enter the choice:\n" << endl;

        cout <<"1. ADD" << endl;
        cout <<"2. SUBTRACT" << endl;
        cout <<"3. MULTIPLY" << endl;
        cout <<"4. DIVIDE" <<endl;
        cin >> n;

        cout << "Enter first Number:\n";
        cin >> a;
        cout << "Enter second number:\n";
        cin >> b;

        switch(n)
        {
            case 1: add(a,b);
                    break;
            case 2: subtract(a,b);
                    break;
            case 3: multiply(a,b);
                    break;
            case 4: divide(a,b);
                    break;
            default : cout << " Enter valid choice:"<< endl;                
        }
        return 0;
 }

 int add(int a, int b)
 {
      cout << a+b;
 }

 float subtract(int a, int b)
 {
    cout << a-b;
 }

 float multiply(int a, int b)
 {
    cout << a*b;
 }

 float divide (int a,int b)
 {
    cout << a/b;
 }
