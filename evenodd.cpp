#include<bits/stdc++.h>
using namespace std;

int main () {
    int i,n, e = 0 , o = 0;
    cout << "Enter number of elements in array:\n";
    cin >> n;
    int arr[n];
    for ( i=0; i<n ;i++)
    {  
        cin >> arr[i];

        if(arr[i]%2==0)
          
        e++;
        else
        o++;

    }

    if((e%2==0) && (o%2!=0))
    cout << "YES";
    else
    cout <<"NO";
    
 return 0;   
}

