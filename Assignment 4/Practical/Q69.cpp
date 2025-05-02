//Q69.Write an abstract class Employee with pure virtual functions calculateSalary() and displayDetails(). Implement derived classes Manager and Engineer.
#include <iostream>
#include<string>
using namespace std;
class Employee {
public:
    string name;
    virtual void calculateSalary() = 0;
    virtual void displayDetails() = 0;
};
class Manager : public Employee {
public:
    float baseSalary;
    Manager(string n, float salary) {
        name = n;
        baseSalary = salary;
    }
    void calculateSalary() {
        cout << "Manager Salary: " << baseSalary + 5000 << endl;
    }
    void displayDetails() {
        cout << "Manager Name: " << name << endl;
    }
};
class Engineer : public Employee {
public:
    float hourlyRate;
    int hoursWorked;
    Engineer(string n, float rate, int hours) {
        name = n;
        hourlyRate = rate;
        hoursWorked = hours;
    }
    void calculateSalary() {
        cout << "Engineer Salary: " << hourlyRate * hoursWorked << endl;
    }
    void displayDetails() {
        cout << "Engineer Name: " << name << endl;
    }
};
int main() {
    Manager m("Harsh", 30000);
    Engineer e("Ram", 200, 160);
    Employee* emp;
    emp = &m;
    emp->displayDetails();
    emp->calculateSalary();
    emp = &e;
    emp->displayDetails();
    emp->calculateSalary();
    return 0;
}
