//Q90.Implement a program that demonstrates the use of virtual destructors in a class hierarchy.
#include<iostream>
#include<string>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"base constructor:"<<endl;
    }
    virtual ~Base(){
        cout<<"base destructor:"<<endl;
    }
};
class Derieved :public Base{
    public:
    Derieved(){
        cout<<"derieved constructor:"<<endl;
    }
     ~Derieved(){
   cout<<"derieved destructor:"<<endl;
    }
};
int main(){
    delete new Derieved();
    return 0;
}
