#include<bits/stdc++.h>
using namespace std;

int main  () {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int AntonWins=0, DanikWins=0;

    for(int i=0;i<n;i++){

       if ( s == 'A') {
          AntonWins++;
       }
       else {
           DanikWins++;
       }
    }

    if (AntonWins>DanikWins) {
        cout << "Anton" << endl;
    }
    else if (DanikWins>AntonWins){
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }
    return 0;
}