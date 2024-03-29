#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    string r;
    cin >> r; 
    
    int antonWins = 0, danikWins = 0;
    
    for (char c : r) {
        if (c == 'A') {
            antonWins++;
        } else if (c == 'D') {
            danikWins++;
        }
    }
    
    if (antonWins > danikWins) {
        cout << "Anton" << endl;
    } else if (danikWins > antonWins) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl; 
    }
    
    return 0;
}