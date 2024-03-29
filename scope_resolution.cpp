/*Create a class name account with three diff fun Deposit, Withdraw and display_balance, we have a 
global variable with name balance and initialize balance with Amount = 10000, perform
diff operation in class functions 
in deposit() accept amount in variable name balance from user and calculate total amount,
in withdraw() accept ammount in variable name balance from user and deduct the amount from global variable balanceif 
amount is less than balance,
in Display_Balance() function display account balance?*/

#include<iostream>                          
using namespace std;

float balance = 10000;
class Account {

public:
 void deposit() {
    float balance;
    cout<<"\n Enter Amount to deposit";
    cin >> balance;
    cout << "\n Your current balance is:" << ::balance + balance;
  }
 void withdraw() {
    float balance;
    cout<<"\n Enter Amount to withdraw : ";
    cin >> balance;
    if(::balance < balance) {
    cout << "\n Insufficient Amount" ;
    }
    else {
        cout << "\n Your Current Balance after withdrawal:" << ::balance-balance;
    }
  }

  void display_balance() {
    cout << "\n Your Balance is" << ::balance;
  }
};

int main() {
    Account obj;
    int choice;
    cout << "\n Enter your Choice: \n 1 To deposit Amount\n 2 To Withdraw\n 3 To display\n";
    cin >> choice ;
   
    if(choice == 1) {
        obj.deposit();
    }
    if (choice == 2)
    {
        obj.withdraw();
    }
    
    else if(choice == 3) {
        obj.display_balance();
    }
    else {
        cout << "\n You have Entered Invalid Choice";
    }

    return 0;
}