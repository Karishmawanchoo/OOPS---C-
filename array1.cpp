#include<bits/stdc++.h>
using namespace std;

int main () {
   int n, x, y=0, z=0;
   int arr[40];
   cout << "Enter the length of an array\n";
   cin >> n;
   for(int i=0;i<n;i++)
       {
        cout << "Enter the element:\n";
        cin >> x;
        arr[i]=x;
       }
   for (int i=0; i<n ;i++ )
   {
    if (arr[i]>y)
    {
      z=y;
      y=arr[i];

    }
    else 
    {
      if(arr[i]> z)
      {
        z = arr[i];
      }
    }
   }
   cout << endl;
   cout << "The greatest no. is :";
   cout << y;
   cout << endl;
   cout << "The second greatest no. is:";
   cout << z;
  
  
  return 0;
}