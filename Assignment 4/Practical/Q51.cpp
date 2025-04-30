//Implement a base class shape with derieved class Circles,Rectangle,and Triangle.Use virtual functions to calculate the area of each shape.
#include<iostream>
#include<string>
using namespace std;
class Shape{
    public:
    virtual void area(){
        cout<<"this is shape class"<<endl;
    }
};
class Circle:public Shape{
    public:
    float radius;
    Circle(float r){
        radius=r;
    }
    void area()override{
        cout<<"Area of circle"<<3.14*radius*radius<<endl;
    }
};
class Rectangle:public Shape{
    private:
    float length,width;
    public:
    Rectangle(float l,float w){
        length=l;
        width=w;
    }
  void area()override{
    cout<<"Area of rectangle"<<length*width<<endl;
  }
};
class Triangle:public Shape{
    private:
    float base,height;
    public:
    Triangle(float b,float h){
    base=b;
    height=h;
    }
    void area()override{
        cout<<"area of triangle"<<0.5*base*height<<endl;
    }
};
int main(){
    Circle c(5);
    Rectangle r(4,5);
    Triangle t(2,4);
    c.area();
    r.area();
    t.area();
    return 0;
}