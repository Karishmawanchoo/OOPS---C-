#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin >> n;
    vector<int>v(n);

    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    int maxi=v[0];
    int ii=0;  // index of max element
    for(int i=0;i<n;i++) {
       // maxi= max(v[i],maxi);
       if(v[i]>maxi){
        maxi=v[i];
        ii=i;
       }
    }
}