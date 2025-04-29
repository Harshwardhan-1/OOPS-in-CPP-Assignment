//Q79.Write a class vehicle with Derieved classes Car and Bike.
#include<iostream>
#include<string>
using namespace std;
class Vehicle{
public:
virtual void show(){
    cout<<"there are vehicle"<<endl;
}
};

class Car:public Vehicle{
   public:
   void show()override{
    cout<<"car is expensive"<<endl;
   } 
};

class Bike:public Vehicle{
    public:
    void show()override{
        cout<<"Bike is less expensive"<<endl;
    }
};
int main(){
    Car c;
    Bike b;
    c.show();
    b.show();
    return 0;
}