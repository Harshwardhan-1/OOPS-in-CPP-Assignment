//Q81.Create a class parent and implment multiple inheritance with derieved classes Child1 and Child2.
#include<iostream>
#include<string>
using namespace std;
class Parent{
   public:
   void showParent(){
    cout<<"this is parent class"<<endl;
   }

};
class child1:public Parent{
    public:
    void showChild1(){
        cout<<"this is class child 1"<<endl;
    }
};
class Child2:public Parent{
    public:
    void showChild2(){
        cout<<"this is class child 2"<<endl;
    }
};
class GrandChild:public  child1 , public Child2{
    public:
    void showGrandChild(){
        cout<<"this class will be derieved from both child1 and child 2 class"<<endl;
    }
};
int main(){

   GrandChild obj;
   obj.showGrandChild();
   obj.showChild1();
   obj.showChild2();
    return 0;
}



