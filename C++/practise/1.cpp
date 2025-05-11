#include <iostream>
#include <ctime>
using namespace std;
class BankAccount {
public:
    int accountNumber;
    string accountHolder;
    int balance = 0;

    BankAccount(int AN=(rand()%1000000000),string AH){
        accountNumber=AN;
        accountHolder=AH;
    }
    void deposit(int amount) {
        if(amount>0){
            balance += amount;
            cout<<amount<<"$ has been deposited to your account.\n";
        }
        else
            cout<<"please Enter a Valid amount\n";
    }
    
    void withdraw(int amount) {
        if(amount>0 && amount<=balance){
            balance -= amount;
            cout<<amount<<"$ has been withdrawn from your account.\n";
        }
        else if(amount>0){
            cout<<"please Enter a valid amount.\n";
        }
        else{
            cout<<"Insufficient balance.\n";
        }

    }
    
    void getbalance() {
        cout << "Your total balance is : " << balance << endl;
    }
};

int main() {
    int amount;
    int cash;
    int balance;
    BankAccount Manage;

    cout << "enter your amount to deposit" << endl;
    cin >> amount;
    Manage.deposit(amount);

    cout << "enter your amount to withdraw" << endl;
    cin >> cash;
    Manage.withdraw(cash);

    Manage.getbalance();

    return 0;
}
