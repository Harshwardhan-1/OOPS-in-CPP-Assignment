//Q73.Write a program to read and write complex data structures to a file using binary file streams.
#include<iostream>
#include<fstream>
using namespace std;
struct Student{
int id;
char name[20];
double marks;
};
int main(){
    Student s1{1,"harshwardhan",80.4}; 
    ofstream out("student bin",ios::binary);
    out.write((char*)&s1,sizeof(s1));
    out.close();
    Student s2;
    ifstream in("student bin",ios::binary);
    in.read((char*)&s2,sizeof(s2));
    in.close();
    cout<<"ID:"<<s2.id<<endl;
    cout<<"Name:"<<s2.name<<endl;
    cout<<"Marks:"<<s2.marks<<endl;
    return 0;
}
