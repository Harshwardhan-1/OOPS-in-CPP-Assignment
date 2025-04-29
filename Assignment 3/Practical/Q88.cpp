//Q88.Create a base class Employee and derieved class manager with overridden methods.
#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    Employee(){
  cout<<"this is employee constructor:"<<endl;
    }
    virtual void showDetail(){
        cout<<"this is employee class:"<<endl;
    }
};
class manager:public Employee{
    public:
    manager(){
        cout<<"this is manager constructor:"<<endl;
    }
    void showDetail()override{
        cout<<"this is manager:"<<endl;
    }
};
int main(){
    manager m;
    m.showDetail();
    cout<<"finding through pointer:"<<endl;
    Employee*ptr=&m;
    ptr->showDetail();
    return 0;
}