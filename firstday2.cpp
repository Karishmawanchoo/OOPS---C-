#include <iostream>
using namespace std;

int main() {

    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a>b && a>c)
    {
        cout << a << "is maximum";
    }

    if(b>a && b>c)
    {
        cout<< b << "is maximum";
    }
    if(c>b && c>a)
    {
        cout << c << "is maximum";
    }

    
	return 0;
}