#include <iostream>
using namespace std;

int main() {
    
    
     int n;
     cout << "Enter any number:\n";
     cin >> n;

     int i=1;
    

    while(i<=n/2){
     
     if(n%i==0){
          cout << i << " " << n/i <<" ";
     }
     
     
     i++;
    }
    return 0;
}