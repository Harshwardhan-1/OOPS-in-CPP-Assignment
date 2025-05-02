//Q65.Create a class Account with a pure virtual function calculateInterest(). Implement derived classes SavingsAccount and CurrentAccount.
#include <iostream>
using namespace std;
class Account {
public:
    float balance;
    Account(float b) {
        balance = b;
    }
    virtual void calculateInterest() = 0;
};
class SavingsAccount : public Account {
public:
    SavingsAccount(float b) : Account(b) {}
    void calculateInterest() {
        float interest = balance * 0.04; // 4% interest
        cout << "Savings Account Interest: " << interest << endl;
    }
};
class CurrentAccount : public Account {
public:
    CurrentAccount(float b) : Account(b) {}
    void calculateInterest() {
        cout << "Current Account has no interest." << endl;
    }
};
int main() {
    SavingsAccount sa(1000);
    CurrentAccount ca(1000);
    Account* acc;
    acc = &sa;
    acc->calculateInterest();
    acc = &ca;
    acc->calculateInterest();
    return 0;
}
