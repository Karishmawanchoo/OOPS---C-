#include<iostream>
using namespace std;

int main()  {

    int n; // number of names on the list
    cin >> n;
    vector<string>v;

    for (int i=0;i<n;i++) {
       cin >> v[i];
    }
    for(int i=0;i<n;i++) {
        bool check=false; // check indicates the presence of that name before it
        for (int j=0;j<i;j++) {
            if(v[i]==v[j]){
                check= true;
            }
        }

        if (check== true){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}