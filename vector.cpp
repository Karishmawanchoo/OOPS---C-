#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n ;
    vector<int>v;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
     
    int b;
    cin >> b ;
    for(int i=0;i<b;i++) {

        if(v[i] == b)
    {
         cout << i << endl;
    } 

   }
   return 0;
}


   
