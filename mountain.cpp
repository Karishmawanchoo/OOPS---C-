#include<bits/stdc++.h>
using namespace std;

int find_peak (vector<int> & v) {
   int si = 0;
   int ei = v.size() - 1;

   while (si < ei) { 
        int mi = si + (ei - si) / 2;

        if (v=[mi] > v[mi + 1] && v[mi] > v[mi - 1]) {
            return mi;  
        } else if (v[mi] < v[mi + 1]) {
            si = mi + 1;  
        } else {
            ei = mi - 1;  
        }
    }

    return left;  
}

int main() {
    vector<int> v = {1, 3, 5, 7, 8, 6, 4, 9};
    int peakIndex = findPeak(v);
    cout << "Peak appears at index: " << peakIndex << endl;

    return 0;
}


   
