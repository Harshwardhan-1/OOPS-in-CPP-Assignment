//Q57.Write a program that creates a dynamic object of a class Student and accesses its members using pointers.
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int age;
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};
int main(){
    Student*ptr=new Student;
    ptr->name="harsh";
    ptr->age=19;
    ptr->display();
    delete ptr;
    return 0;
}
