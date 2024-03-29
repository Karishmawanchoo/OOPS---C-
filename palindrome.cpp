#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "abba";
    string str1= str;
    string n = str1.length;


   for(int i=0;i<n/2;i++)
   {
    char temp = str1[i];
    str1[i] = str1[n-1-i];
    str1[n-1-i] = temp;
   }

   return 0;
}