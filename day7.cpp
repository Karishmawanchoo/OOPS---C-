#include<bits/stdc++.h>
using namespace std;

void processArray(int arr[], int size) {
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
        
         }
         cout << endl;

}

int main() {
    const int arraySize=5;
    int myArray[arraySize]={1,2,3,4,5};
    processArray(myArray, arraySize);
    return 0;
}