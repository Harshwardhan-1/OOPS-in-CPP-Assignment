//Write a program that demonstrates function overriding using a base class Employee and derieved class Manager and worker.
#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    virtual void working(){
        cout<<"employee Working class"<<endl;
    }
};
class Manager:public Employee{
    public:
void working()override{
    cout<<"Manager Working class"<<endl;
}
};
class Worker:public Manager{
    public:
    void working()override{
        cout<<"worker working class"<<endl;
    }
};
int main(){

    Manager m;
    Worker w;
    m.working();
    w.working();
    return 0;
}
