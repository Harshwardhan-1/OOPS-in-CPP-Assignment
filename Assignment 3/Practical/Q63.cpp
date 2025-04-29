// //Q63.Write a class student with a static data member to keep track of the total nnumber of student enrolled.
#include<iostream>
#include<string>
using namespace std;
class Student{
static int count;
public:
Student(){
    count++;
}
void displayStudent(){
    cout<<"no of student enrolled:"<<count<<endl;
}
};
int Student::count;
int main(){
    Student a,b;
    a.displayStudent();
     b.displayStudent();
     Student c;
     c.displayStudent();
    return 0;
}