//Q64.Implement the class book with a parameterized constructor to initialize book details.
#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    string book;
    string author;
    double price;
    Book(string b,string a,double p){
        book=b;
        author =a;
        price=p;

    }
    void display(){
        cout<<"Book:"<<book<<endl;
        cout<<"author:"<<author<<endl;
        cout<<"Price:"<<price<<endl;
    }
};
int main(){
    Book b1("The last lesson","Harshwardhan",500);
    b1.display();
    return 0;
}












