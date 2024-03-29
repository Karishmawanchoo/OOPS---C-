#include<bits/stdc++.h>
using namespace std;

void point_row_one_by_one(int n, int i){
    for(int j=1;j<=i-n;j++){
        cout << " ";
    }
    for(int j=1;j<=n;j++){
      cout << j<< " ";
    }
    for(int j=n-1;j>=1;j--){
        cout <<j<<" ";

    }
    cout << endl;

}
int main () {
       int n;
       cin >> n;
       for(int i=1;i<=n;i++) {
            print_row_one_by_one(n,i  )

    }
    

  return 0;
}