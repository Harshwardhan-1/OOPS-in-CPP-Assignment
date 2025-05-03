//Q84.Implement a program that demonstrates the use of smart pointers for dynamic memory management.
#include<iostream>
#include<memory>
using namespace std;
class Student{
private:
string name;
public:
Student(string n){
    name=n;
    cout<<"student created:"<<endl;
}
void display(){
    cout<<"name:"<<name<<endl;
}
~Student(){
    cout<<"student class destroyed:"<<endl;
}
};
int main(){
    unique_ptr<Student> s = make_unique<Student>("Harshwardhan");
    s->display();
    return 0;
}
