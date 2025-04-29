//Q78.Create a class Animal with derieved classes Dog,Catand Bird.
#include<iostream>
#include<string>
using namespace std;
class Animal{
public:
virtual void speak(){
cout<<"Animal makes a sound!"<<endl;
}};
class Dog:public Animal{
    public:
    void speak() override{
        cout<<"dog says bow bow !"<<endl;
    }
};
class Cat :public Animal{
    public:
void speak()override{
    cout<<"cat says meow meow!"<<endl;
}
};
class Bird:public Animal{
    public:
void speak()override{
    cout<<"birds says chir chir!"<<endl;
}
};

int main(){
    Dog d;
    Cat c;
    Bird b;
    d.speak();
    c.speak();
    b.speak();
    return 0;
}