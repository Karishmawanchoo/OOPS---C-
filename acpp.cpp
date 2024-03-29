#include<bits/stdc++.h>
using namespace std;
int max1(int a, int b){
    a=100;
    return max(a,b);
}
int max2(int &a, int &b){
     a=500;
     return max(a,b);
}

int main () {
    int a,b;
    cin >> a ;
    cin >> b ;
    int x1 = max1(a,b);
    cout << a << endl;
    int x2 = max2(a,b);
    cout << a << endl;

    return 0;
} 