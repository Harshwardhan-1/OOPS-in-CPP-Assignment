//Q55.Implement a class student taht inherits from person and adds a private attribute studentID with appropriate methods.
#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    void setName(string n){
        name=n;
    }
    void setAge(int a){
        age=a;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;

    }
};
    class Student:public Person{
        public:
        int StudentID;
        void setStudentID(int id){
            StudentID=id;
        }
        int getStudentID(){
             return StudentID;
        }   
        void getID(){
            cout<<"studentID:"<<StudentID<<endl;
        }
     };


int main(){
   Student p1;
    p1.setName("harsh");
    p1.setAge(19);
p1.getInfo();
p1.setStudentID(12345);
p1.getID();
    return 0;
}