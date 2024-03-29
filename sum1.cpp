#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n, sum =0;
    cout << "Enter the length of array:\n";
    cin >> n;
    int arr[100];

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        arr[i]= x;
    }
    cout << "Enter the sum:\n";
    cin >> sum;

    for(int j=0;j<n;j++) 
    {
       for(int k=1;k<n;k++)
       {
        if((arr[j] + arr[k])== sum)
        {
            cout << arr[j] << ",";
            cout << arr[k];
            cout << endl;
        }
    

    }
 

}
 
  return 0;
}  