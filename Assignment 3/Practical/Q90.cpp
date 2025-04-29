//Q90.Write a class animal and implement a virtual base class to avoid the diamond problem in inheritance.
#include <iostream>
#include<string>
using namespace std;
class Animal {
public:
    void speak() {
        cout << "Animal speaking..." << endl;
    }
};
class Mammal : virtual public Animal {
public:
    void walk() {
        cout << "Mammal walking..." << endl;
    }
};
class Bird : virtual public Animal {
public:
    void fly() {
        cout << "Bird flying..." << endl;
    }
};
class Bat : public Mammal, public Bird {
public:
    void describe() {
        cout << "Bat can fly and walk." << endl;
    }
};
int main() {
    Bat b;
    b.speak();
    b.walk();
    b.fly();
    b.describe();
    return 0;
}
