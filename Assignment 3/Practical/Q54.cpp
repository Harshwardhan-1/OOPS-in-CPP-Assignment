//Q54.Create a class person with private attributrs name, age, and public methods to set and get the values.
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
int main(){
    Person p1;
    p1.setName("Harshwardhan yadav");
    p1.setAge(19);
    p1.getInfo();
    return 0;
}