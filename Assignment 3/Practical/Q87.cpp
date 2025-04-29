//Q87.Implement function overriding with a base class shape and derieved class circle.
#include<iostream>
#include<string>
using namespace std;
class shape{
    public:
    
    virtual void display(){
        cout<<"this is shape:"<<endl;
    }
};
class circle:public shape{
    public:
   
    void display()override{
    cout<<"this is a circle:"<<endl;
    }
};
int main(){
    shape s;
    circle c;
    s.display();
    c.display();
    shape*ptr=&c;
    ptr->display();
    return 0;
}