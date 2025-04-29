//Q77.Implemented a class shape with derieved classes Circle,Rectanle,and Triangle.
#include <iostream>
#include<string>
using namespace std;
class Shape {
public:
    void show() {
        cout << "This is a shape." << endl;
    }
};
class Circle : public Shape {
public:
    float radius;
    void setRadius(float r) {
        radius = r;
    }
    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
public:
    float length, width;
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }
    void area() {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};
class Triangle : public Shape {
public:
    float base, height;
    void setDimensions(float b, float h) {
        base = b;
        height = h;
    }
    void area() {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};
int main() {
    Circle c;
    c.setRadius(5);
    c.area();
    Rectangle r;
    r.setDimensions(4, 6);
    r.area();
    Triangle t;
    t.setDimensions(3, 7);
    t.area();
    return 0;
}
