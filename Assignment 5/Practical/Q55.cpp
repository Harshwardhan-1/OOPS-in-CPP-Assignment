//Q55.Implement a program that reads user input for name, age, and salary, and then displays the information using formatted output.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string name;
    int age;
    double salary;
    cout<<"name";
    getline(cin,name);
    cout<<"age";
    cin>>age;
    cout<<"salary";
    cin>>salary;
    cout<<fixed<<setprecision(2);
    cout<<"name:"<<name<<"age:"<<age<<"salary:"<<salary<<endl;
    return 0;
}
