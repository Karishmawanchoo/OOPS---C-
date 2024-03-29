#include <iostream>
using namespace std;

int main() {
    
    
     int n;
     cin >> n;
     int count =0;
     int i=1;
     cout << "Enter any number:\n";

    while( i <=n )
    {
        if (n % i == 0)
              count ++;

        i++;
    }
    cout << count << endl;
    
    return 0;
}