#include <bits/stdc++.h>
using namespace std;
//a, b
//a = 12 => 1, 2, 3,4,6,12
//b = 8 => 1, 2, 4, 8
//gcd = 4
int main() {
   int a,b;
   cout << "Enter any number:\n";
   cin >> a >> b;

 int i = 1;

 int mini = a;
 if (b < a) mini =b;

 int gcd = 1;

 while(i <= mini) {

    while (i <= mini){
        if ((a%i == 0) && (b%i == 0)) {
            //common divisor
            gcd = i;
        }
    i++;
    }
     cout << gcd << endl;

 }
return 0;
} 