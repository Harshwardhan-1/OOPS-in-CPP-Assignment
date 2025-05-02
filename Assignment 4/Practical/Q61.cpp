//Q61. Implement a program that uses the this pointer to chain member function calls in a class Person.
#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person& setName(string n){
        name=n;
        return*this;
    }
    Person& setAge(int a ){
        age =a;
        return *this;
    }
    void display(){
        cout<<"name:"<<name<<"age:"<<age<<endl;
    }
};
int main(){
    Person p1;
    p1.setName("harsh").setAge(19);
    p1.display();
    return 0;
}
