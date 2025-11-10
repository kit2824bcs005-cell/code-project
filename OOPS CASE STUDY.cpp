#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount() {
        accountNumber = 0;
        balance = 0.0;
        cout << "Default constructor called.\n";
    }

    BankAccount(int accNo) {
        accountNumber = accNo;
        balance = 0.0;
        cout << "Constructor with account number called.\n";
    }

    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
        cout << "Constructor with account number and balance called.\n";
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl << endl;
    }
};

int main() {
    BankAccount acc1;
    acc1.display();

    BankAccount acc2(1001);
    acc2.display();

    BankAccount acc3(1002, 5000.50);
    acc3.display();

    return 0;
}

