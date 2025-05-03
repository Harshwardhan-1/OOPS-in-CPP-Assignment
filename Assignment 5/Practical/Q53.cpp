//Q53.Write a program to input and output various data types using cin and cout.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int age;
  float height;
  cout<<"enter your name";
  getline(cin,name);
  cout<<"enter height";
  cin>>height;
  cout<<"enter age";
  cin>>age;
  cout<<"output:"<<endl;
  cout<<"name:"<<name<<"age:"<<age<<"height:"<<height<<endl;
    return 0;
}
