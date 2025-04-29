//Q58.Implement a class bank account with private attributes for account number,balance,and public methods for depositing and withdarwing money.

#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    double balance;
    public:
    BankAccount(int accNum, double bal){
        accountNumber=accNum;
        balance=bal;
    }
    void display(){
        cout<<"accountNumnber:"<<accountNumber<<endl<<"balance:"<<balance<<endl;
    }
    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"deposited successfully:"<<endl;

        }
        else{
            cout<<"transaction failed:"<<endl;
        }
    }
    void withdraw(double amount){
        if (amount>0 &&amount<=balance){
            balance-=amount;
            cout<<"withdraw successfully:"<<endl;
        }
        else{
            cout<<"withdraw successfully:"<<endl;
        }
    }
};
int main(){
    BankAccount acc(1235,5000);
    acc.display();
    acc.deposit(200);
    acc.withdraw(100);
    acc.display();
    return 0;
}