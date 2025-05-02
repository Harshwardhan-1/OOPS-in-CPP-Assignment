//Q58.. Implement a program that uses a pointer to an array of objects to store and display details of multiple Book objects.
#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    string title;
    string author;
    void display(){
        cout<<"title:"<<title<<endl;
        cout<<"author:"<<author<<endl;
    }
};
int main(){
    Book*books=new Book[2];
    books[0].title="harsh";
    books[0].author="jay";
    books[1].title="jay";
    books[1].author="harsh";
    for(int i=0;i<2;i++){
        books[i].display();
    }
    delete[]books;
    return 0;
}
