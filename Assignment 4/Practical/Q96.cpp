//Q96. Implement a program that uses virtual functions and inheritance to create a simulation of an ecosystem with different types of animals.
#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
    virtual ~Animal() {}
};
class Lion : public Animal {
public:
    void sound() override {
        cout << "Lion roars" << endl;
    }
};
class Elephant : public Animal {
public:
    void sound() override {
        cout << "Elephant trumpets" << endl;
    }
};
int main() {
    Lion l;
    Elephant e;
    l.sound();  
    e.sound();
    return 0;
}
