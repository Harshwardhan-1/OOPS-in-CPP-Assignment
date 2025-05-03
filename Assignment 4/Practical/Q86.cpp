//Q86.Write a program that demonstrates the use of virtual inheritance to avoid the diamond problem in multiple inheritance.
#include <iostream>
using namespace std;
class Person {
public:
    string name;
    void setName(string n) {
        name = n;
    }
    void showName() {
        cout << "Name: " << name << endl;
    }
};
class Student : virtual public Person {
public:
    void study() {
        cout << name << " is studying." << endl;
    }
};
class Employee : virtual public Person {
public:
    void work() {
        cout << name << " is working." << endl;
    }
};
class Intern : public Student, public Employee {
public:
    void learnAndWork() {
        cout << name << " is learning and working as an intern." << endl;
    }
};
int main() {
    Intern obj;
    obj.setName("HARSHWARDHAN");
    obj.showName();
    obj.study();
    obj.work();
    obj.learnAndWork();
    return 0;
}
