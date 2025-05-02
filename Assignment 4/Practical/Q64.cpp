//Q64.Implement a program that demonstrates runtime polymorphism using a virtual function in a base class Shape and derived classes Circle and Square.
#include<iostream>
#include<string>
using namespace std;
class Shape{
public:
virtual void draw(){
    cout<<"Drawing a shape:"<<endl;
}
};
class Circle:public Shape{
    public:
    void draw(){
        cout<<"this is circle class:"<<endl;
    }
};
class Square: public Shape{
    public:
    void draw(){
        cout<<"this is square class:"<<endl;
    }
};
int main(){
    Shape*shape;
    Circle c;
    Square s;
    shape=&c;
    shape->draw();
    shape=&s;
    shape->draw();
   return 0;
}
