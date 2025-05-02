//Q59.Create a program that demonstrates the use of a pointer to an object in a class member function.
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int age;
void setDetails(Student*s){
  name=s->name;
  age=s->age;
}
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};
int main(){
    Student s1,s2;
    s1.name="harsh";
    s1.age=19;
     s2.setDetails(&s1);
     cout<<"student s1";
     s1.display();
     cout<<"student s2";
     s2.display();
    return 0;

}
