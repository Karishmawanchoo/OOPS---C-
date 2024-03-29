#include <iostream>
#include<math.h>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    
    
     int n;
     cout << "Enter any number:\n";
     cin >> n;

     int i=1;
    

    while(i<= sqrt(n)){
     
     if(n%i==0){
          cout << i << " " << n/i ;
     }
     
     
     i++;
    }

    
    return 0;
}