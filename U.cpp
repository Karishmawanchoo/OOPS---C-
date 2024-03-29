#include<bits/stdc++.h>
using namespace std;

int index_of_elements(vector<int> &v, int to_find) {
    int si =0;
    int ei=v.size()-1;
    int ans_ind;
    while (si<=ei){
        int mi=(si+ei)/2;

        if(v[mi]== to_find){
            return mi;
            //ans_ind=mi;
        }
        else if(v[mi]<to_find){
            si=mi+1;
          } 
        else{
            ei=mi-1;
        }
    }
    //return ans_ind;
}

int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
    cin >> v[i];
    }

    int to_find;
    cin >> to_find;
}