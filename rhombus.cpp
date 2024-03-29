#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows:";
    cin >> n;

    int j;
    cout << "Enter the number of columns:";
    cin >> j;
   
   for (int i=n; i>=1; i--)
   {
    for(int j=1;j<=1; j++)
    {
        cout << " ";
    }
    for(int k=1; k<=1; k++)
    {
        cout << "*";
    }
    printf("\n");
   }
   return 0;
}