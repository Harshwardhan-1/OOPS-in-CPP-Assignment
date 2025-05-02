//Q71.Create an abstract class Device with a pure virtual function turnOn(). Implement derived classes Laptop and Smartphone.
#include<iostream>
#include<string>
using namespace std;
class Device{
    public:
 virtual void turnOn()=0;
};
class Laptop:public Device{
    public:
    void turnOn(){
        cout<<"laptop class:"<<endl;
    }
};
class SmartPhone:public Device{
    public:
    void turnOn(){
        cout<<"Smartphone class:"<<endl;
    }
};
int main(){
    Device*device;
    SmartPhone s;
    Laptop l;
    device=&s;
    device->turnOn();
     device=&l;
     device->turnOn();
    return 0;
}
