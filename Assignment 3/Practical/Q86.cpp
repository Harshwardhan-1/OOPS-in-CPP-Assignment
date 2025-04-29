//Q86.create a class account with private data members and public methods to access and modify them.
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    double balance;
    public:
    BankAccount(int accNum,double bal){
        accountNumber=accNum;
        balance=bal;
    }
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        balance-=amount;
    }
    void display(){
        cout<<"Account number:"<<accountNumber<<",Balance:"<<balance<<endl;
    }


    void performTransaction(){
        deposit(15000);
        withdraw(1000);
      display();
    }
};
int main(){
    BankAccount ac(123097,5000);
    ac.performTransaction();
    return 0;
}