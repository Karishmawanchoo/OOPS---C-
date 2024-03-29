#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n; // number of forces
    vector<vector<int>>v(n, vector<int>(3));

    for (int i=0;i<n;i++) {
        cin >> v[i][0] >>  v[i][1] >> v[1][2];
    }
    int sumx=0, sumy=0, sumz=0;
    for (int i=0;i<n;i++) {
        sumx+=v[i][0];
        sumy+=v[i][1];
        sumz+=v[i][2];
    }
    if(sumx==0 and sumy==0 and sumz==0) {

        cout << "YES" << endl;

    }
    else {

        cout << "NO" << endl;
    }


}