//Q66.Write a program that demonstrates polymorphism using a base class Media and derived classes Book and DVD.
#include<iostream>
#include<string>
using namespace std;
class Media{
    public:
 virtual void display(){
    cout<<"this is media class:"<<endl;
 }
};
class Book:public Media{
    public:
    void display(){
        cout<<"this is a book:"<<endl;
    }
};
class DVD:public Media{
    public:
    void display(){
        cout<<"this is a dvd:"<<endl;
    }
};
int main(){
    Media*m;
    DVD d;
    Book b;
    m=&d;
    m->display();
    m=&b;
    m->display();
    return 0;
}
