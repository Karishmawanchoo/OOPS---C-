#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
     int n;
     cout << "Enter any number:\n";
     cin >> n;

     int i=1;
     int count=0;

    while(i<=n){
     
     if(n%i==0){
          count++;
     }

      
     i++;
    }
    if (count==2) {
        
        cout <<"Prime ";}

    else
    {
        cout << "Not prime";}



}
   
    