//Q82.Write a class base and implement hiearchial inheritance with derieved classes Derieved1,Derieved2 and Derieved3.
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

};
class Derieved1:public Base{
public:
Derieved1(){
    cout<<"derieved 1 class constructor is called:"<<endl;
}
void displayDerieved1(){
    cout<<"this is derieved class:"<<endl;
}
};
class Derieved2:public Base{
    public:
    Derieved2(){
      cout<<"derieved 2 constructor is called:"<<endl;
    }
    void displayDerieved2(){
        cout<<"this is class derieved 2:"<<endl;
    }
};
class Derieved3:public Base{
    public:
    Derieved3(){
        cout<<"derieved 3 constructor is called:"<<endl;
    }
    void DisplayDerieved3(){
        cout<<"this is derieved class 3:"<<endl;
    }
};
int main(){
    Derieved1 obj1;
    obj1.displayBase();
    obj1.displayDerieved1();
    cout<<endl;
    

    Derieved2 obj2;
    obj2.displayBase();
    obj2.displayDerieved2();
     cout<<endl;

     Derieved3 obj3;
     obj3.displayBase();
     obj3.DisplayDerieved3();
     cout<<endl;

    return 0;
}