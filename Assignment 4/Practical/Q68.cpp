//Q68.Create a program that uses polymorphism to calculate the area of different geometric shapes using a base class Shape and derived classes Circle and Rectangle
#include<iostream>
#include<string>
using namespace std;
class Shape{
    public:
 virtual void area(){
    cout<<"Calculating area:"<<endl;
 }
};
class Circle:public Shape{
    float radius;
    public:
    Circle(float r){
        radius =r;
    }
    void area(){
    float result=3.14*radius*radius;
  cout<<"area of circle:"<<result<<endl;    
}
};
class Rectangle:public Shape{
    float length,breadth;
    public:
    Rectangle(float l,float b){
        length=l;
        breadth=b;
    }
    void area(){
        float result=length*breadth;
        cout<<"area of rectangle:"<<result<<endl;
    }
};
int main(){
    Rectangle r1(2,4);
    r1.area();
    Circle c1(5);
    c1.area();
    return 0;
}
