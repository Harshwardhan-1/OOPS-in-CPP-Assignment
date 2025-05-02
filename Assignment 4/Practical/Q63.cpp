//Q63.Write a program that uses pure virtual functions to create an abstract class Vehicle with derived classes Car and Bike.
#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    public:
    virtual void start()=0;
};
class Car:public Vehicle{
    public:
    void start(){
        cout<<"car is starting:"<<endl;
    }
};
class Bike:public Vehicle{
    public:
    void start(){
        cout<<"bike is starting:"<<endl;
    }
};
int main(){
    Bike b1;
    Car c1;
    b1.start();
    c1.start();
    return 0;
}
