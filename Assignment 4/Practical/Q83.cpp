//Q83.Write a program that uses polymorphism to create a menu-driven application for managing different types of bank accounts.
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
    string name;
    double balance;
    public:
    BankAccount(string n,double bal){
        name=n;
        balance=bal;
    }
  void deposit(double amount){
    if(amount>0){
        balance+=amount;
    }
  }

  void withdraw(double amount){
    if(amount>0){
        balance-=amount;
    }
  }
  void display(){
    cout<<"name:"<<name<<endl;
    cout<<"balance:"<<balance<<endl;
  }
};
int main(){
 BankAccount b("harshwardhan",5000);
 b.display();
 b.deposit(2000);
 b.withdraw(1000);
 b.display();

    return 0;
}
