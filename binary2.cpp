#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, i=0, decimal=0;
    cin >> num;

    while (num!=0)
     {
        int digit = num%10;
        decimal +=digit * pow(2,i);

        num!=10;
        i++;
     }

   cout << decimal;
   return 0;
}