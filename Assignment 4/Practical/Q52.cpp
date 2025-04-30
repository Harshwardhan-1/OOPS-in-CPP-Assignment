//Create a base class animal with a virtual function speak().Implement derieved classes Dog cat and bird each overriding the speak()function.
#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"this is animal class"<<endl;
    }
};
class Dog:public Animal{
public:
void speak()override{
    cout<<"dog barks"<<endl;
}
};
class Cat:public Animal{
    public:
    void speak()override{
        cout<<"meow meow"<<endl;
    }
};
class Bird:public Animal{
    public:
    void speak()override{
        cout<<"chir chir"<<endl;
    }
};
int main(){
    Dog dog;
    Cat cat;
    Bird bird;
    dog.speak();
    cat.speak();
    bird.speak();
    return 0;
}