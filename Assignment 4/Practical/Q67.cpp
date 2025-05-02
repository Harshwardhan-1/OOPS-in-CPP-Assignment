//Q67.Implement a class hierarchy with a base class Appliance and derived classes WashingMachine, Refrigerator, and Microwave. Use virtual functions to display the functionality of each appliance.
#include<iostream>
#include<string>
using namespace std;
class Appliance{
    public:
    virtual void show(){
        cout<<"aplliance class:"<<endl;
    }
};
class WashingMachine:public Appliance{
    public:
    void show(){
        cout<<"this is washing machine class:"<<endl;
    }
};
class Refrigerator:public Appliance{
    public:
    void show(){
        cout<<"this is refrigerator class:"<<endl;
    }
};
class Microwave:public Appliance{
    public:
    void show(){
        cout<<"this is microwave class:"<<endl;
    }
};
int main(){
    Appliance*a;
    Microwave m;
   Refrigerator r;
   WashingMachine wm;
  a=&m;
  a->show();
  a=&r;
  a->show();
  a=&wm;
  a->show();
    return 0;
}
