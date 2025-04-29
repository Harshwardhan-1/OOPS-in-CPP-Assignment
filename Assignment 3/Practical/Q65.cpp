//Q65 Create a class point with a default constuctor,parameterized constructor,and copy constructor.
#include<iostream>
#include<string>
using namespace std;
class point{
    string name;
    int age;
    public:
    //default constructor
    point(){
        name="harsh";
        age=19;
    }
    //parameterized constructor
    point(string n,int a){
        name=n;
        age=a;
        }
        //copy constructor
        point(const point &p){
            name=p.name;
            age=p.age;
        }
        void display(){
            cout<<"name:"<<name<<endl;
             cout<<"age:"<<age<<endl;             
        }
};
int main(){
    point p1;
    point p2("harsh",19);
    point p3("harsh",19);
   p1.display();
   p2.display();
   p3.display();
return 0;
}
