//Q70.Implement an abstract class Payment with a pure virtual function processPayment().Create derived classes CreditCardPayment and DebitCardPayment.
#include<iostream>
using namespace std;
class Payment{
    public:
    virtual void processPayment()=0;
};
class CreditCardPayment: public Payment{
    public:
    void processPayment(){
        cout<<"Credit card payment Processing:"<<endl;
    }
};
class DebitCardPayment:public Payment{
  public:
 void processPayment(){
    cout<<"debit card payment processing:"<<endl;
 }
};
int main(){
    CreditCardPayment credit;
    DebitCardPayment debit;
    Payment*payment;
    payment=&credit;
    payment->processPayment();
    payment=&debit;
    payment->processPayment();
    return 0;
}
