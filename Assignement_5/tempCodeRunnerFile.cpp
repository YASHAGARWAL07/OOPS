#include<iostream>
using namespace std;

/*
    Base Class: Account

    Data Member:
    - balance → stores account balance (Input: float)

    Functions:
    - getBalance()
      Input: takes balance from user
      Work: stores value in balance

    - displayBalance()
      Output: prints balance
*/
class Account {
public:
    float balance;

    void getBalance() {
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

/*
    Derived Class 1: SavingsAccount (inherits Account)

    Function:
    - showSavings()
      Work: Displays savings account info
*/
class SavingsAccount : public Account {
public:
    void showSavings() {
        cout << "Savings Account Details:" << endl;
        displayBalance();   // inherited function
    }
};

/*
    Derived Class 2: CurrentAccount (inherits Account)

    Function:
    - showCurrent()
      Work: Displays current account info
*/
class CurrentAccount : public Account {
public:
    void showCurrent() {
        cout << "Current Account Details:" << endl;
        displayBalance();   // inherited function
    }
};

int main() {

    /*
        Creating objects of both derived classes

        Working:
        - Both classes inherit from Account
        - Each object has its own balance

        Expected Output (example):
        Enter Balance: 5000
        Savings Account Details:
        Balance: 5000

        Enter Balance: 10000
        Current Account Details:
        Balance: 10000
    */

    SavingsAccount s1;
    s1.getBalance();
    s1.showSavings();

    cout << endl;

    CurrentAccount c1;
    c1.getBalance();
    c1.showCurrent();

    return 0;
}