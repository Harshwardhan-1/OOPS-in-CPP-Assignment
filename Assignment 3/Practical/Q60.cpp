//Write a class employee with private attributes name,position and salary,and public methods to display employee details.
#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    string name;
    string position;
    double salary;
 public:
    Employee(string n,string pos,double sal){
   
    name=n;
    position =pos;
    salary=sal;
}
void display(){
    cout<<"Name:"<<name<<"<position:"<<position<<",salary:"<<salary<<endl;
}

};
int main(){
    Employee emp("Rahul kumar","Manager",25000);
    emp.display();
return 0;
}
