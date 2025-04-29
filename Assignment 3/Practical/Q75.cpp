//Q75.Create a class circle with a friend function to calculate the area.
#include<iostream>
#include<string>
using namespace std;
class Circle{
    private:
    float radius;
    public:
    Circle(float r){
        radius =r;
    }
    friend float area(Circle c);

};
float area(Circle c){
    return 3.14*c.radius*c.radius;
}
int main(){
    Circle c(5);
    cout<<"area of circle:"<<area(c)<<endl;
    return 0;
}
