//Q94.Create a program that demonstrates the use of polymorphism to implement a dynamic dispatch mechanism.
#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
    virtual ~Shape() {

    }
};
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};
class Rectangle : public Shape {
public:  
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a triangle." << endl;
    }
};
void displayDrawing(Shape* shape) {
    shape->draw();  
}
int main() {
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
    displayDrawing(&circle);    
    displayDrawing(&rectangle); 
    displayDrawing(&triangle); 
    return 0;
}
