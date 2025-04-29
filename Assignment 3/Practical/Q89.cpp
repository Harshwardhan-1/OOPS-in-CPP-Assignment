//Q89.Implement a virtual base class Entity with Derieved classes Person and Organization.
#include<iostream>
#include<string>
using namespace std;
class Entity{
    public:
    string name;
    void setName(string n){
        name=n;
    }
    virtual void showInfo(){
        cout<<"entityName:"<<name<<endl;
    }
};
class Person:public Entity{
    public:
    int age;
    void setAge(int a){

        age=a;
    }
    void showInfo()override{
        cout<<"name:"<<name<<",age:"<<age<<endl;
    }
};
class Organization:public Entity{
    public:
    string type;
    void setType(string t){
        type=t;
    }
    void showInfo()override{
        cout<<"organization:"<<name<<",type"<<type<<endl;
    }
};
int main(){

   Person p;
   p.setName("harsh");
   p.setAge(19);
   p.showInfo();
   Organization o;
   o.setName("harsh");
   o.setType("IT");
   o.showInfo();
   return 0;
} 