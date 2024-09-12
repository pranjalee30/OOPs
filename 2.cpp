#include <bits/stdc++.h>
using namespace std;

// Encapsulation: wrapping up of data & member functions in a single unit called class.
class Account {
private:
    double balance;        // Private member for data hiding
    string password;

public:
    string accountID;
    string username;

    // Constructor to initialize account
    Account(string accID, string user, string pwd, double initialBalance) {
        accountID = accID;
        username = user;
        password = pwd;
        balance = initialBalance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Method to withdraw money (with password protection)
    void withdraw(double amount, string pwd) {
        if (pwd == password) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << ". Remaining balance: " << balance << endl;
            } else {
                cout << "Invalid withdrawal amount!" << endl;
            }
        } else {
            cout << "Incorrect password!" << endl;
        }
    }

    // Method to check balance (with password protection)
    void checkBalance(string pwd) {
        if (pwd == password) {
            cout << "Current balance: " << balance << endl;
        } else {
            cout << "Incorrect password!" << endl;
        }
    }

    // Method to change the password
    void changePassword(string oldPwd, string newPwd) {
        if (oldPwd == password) {
            password = newPwd;
            cout << "Password changed successfully!" << endl;
        } else {
            cout << "Incorrect old password!" << endl;
        }
    }
};

int main() {
    // Creating an account object
    Account acc1("123456789", "Pranjal Kumar", "securePass123", 5000.00);

    // Perform account operations
    acc1.deposit(1000);                  // Deposit money
    acc1.withdraw(2000, "securePass123"); // Withdraw money with correct password
    acc1.checkBalance("securePass123");   // Check balance with correct password
    acc1.changePassword("securePass123", "newPass456"); // Change password

    // Trying to withdraw with the old password after changing it
    acc1.withdraw(1000, "securePass123"); // Incorrect password
    acc1.withdraw(1000, "newPass456");    // Correct new password

    return 0;
}
