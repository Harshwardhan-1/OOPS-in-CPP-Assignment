//Q59.Create a class rectangle with private attributes for length and width,and public methods to calculate area and perimeter.
#include<iostream>
#include<string>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;
    public:
    Rectangle(double l,double w){
        length=l;
        width=w;
    }
    double getArea(){
        return length+width;
    }
    double getPerimeter(){
        return 2*(length+width);
    }
};
int main(){
    Rectangle react(2.3,4.5);
    cout<<"area:"<<react.getArea();
    cout<<"perimeter:"<<react.getPerimeter();
    return 0;
}