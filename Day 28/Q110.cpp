#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNo;
    string name;
    double balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNo;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    void display() {
        cout << "\n----- Account Details -----\n";
        cout << "Account Number : " << accountNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    account.createAccount();

    do {
        cout << "\n===== BANK ACCOUNT SYSTEM =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.deposit();
                break;

            case 2:
                account.withdraw();
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Thank you for using the Bank Account System!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}