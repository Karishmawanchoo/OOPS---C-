#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numbers;
    int input;

    cout << "Enter 5 numbers:"<< endl;

    for(int i=0; i<5;++i) 
    {
        cout << "Enter number" << i+1 << ":";
        cin >> input;
        numbers.push(input);
    }

    int sum = 0;
    for (int num : numbers)
    {
        sum+=num;
    }
    cout << "Sum of the numbers:" << sum << endl;
    
  return 0;
}    