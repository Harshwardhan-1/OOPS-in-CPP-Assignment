//Q83.Implement multilevel inheritance with classes Base,Intermediate and Derieved.
#include<iostream>
#include<string>
using namespace std;
class Base{
    public:
    Base(){
    cout<<"base class constructor is called:"<<endl;
}
void displayBase(){
    cout<<"this is base class:"<<endl;
}
virtual void show(){
    cout<<"base class show function:"<<endl;
}
};
class Intermediate:public Base{
    public:
    Intermediate(){
        cout<<"this is intermediate cass construcvtor:"<<endl;
    }
    void displayIntermediate(){
         cout<<"intermediatwe constructor is called:"<<endl;
    }
    void show()override{
     cout<<"intermediate class show function:"<<endl;
    }

};
class Derieved:public Intermediate{
    public:
    Derieved(){
        cout<<"derieved class constructor is called:"<<endl;
    }
    void displayDerieved(){
        cout<<"this is derieved class:"<<endl;
    }
    void show()override{
        cout<<"derieved class show function:"<<endl;
    }
};
 
int main(){
    Derieved obj;
    obj.displayBase();
    obj.displayIntermediate();
    obj.displayDerieved();
    obj.show();
    return 0;
}