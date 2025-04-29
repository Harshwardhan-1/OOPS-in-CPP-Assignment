//Q84.Create a class base and implement hybrid inheritance with drieved classes Derieved1,Derieved2,Derieved3.
#include<iostream>
#include<string>
using namespace std;
class Base{
    public:
    void displayBase(){
        cout<<"this is base class:"<<endl;
    }
};
class Derieved1:public Base{
    public:
   
    void displayDerieved1(){
        cout<<"this is derieved 1 class:"<<endl;
    }
};
class Derieved2:public Base{
    public:
   
    void displayDerieved2(){
        cout<<"this is derived class 2"<<endl;
    }

};
class Derieved3:public Derieved1,public Derieved2{
    public:
    void displayDerieved3(){
        cout<<"this is class derieved 3:"<<endl;
    }

};
int main(){
    Derieved3 obj;
  obj.displayDerieved1();
  obj.displayDerieved2();
  obj.displayDerieved3();
    return 0;
}