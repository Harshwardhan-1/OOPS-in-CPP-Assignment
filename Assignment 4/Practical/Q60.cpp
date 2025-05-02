//Q60.Write a class Box with a member function that returns the current object using the this pointer.
#include<iostream>
#include<string>
using namespace std;
class Box{
    private:
    int length;
    public:
    Box(int l){
        length=l;
    }
    Box& getDetails(){
        return*this;
    }
    void display(){
        cout<<"length:"<<length<<endl;
    }
};
int main(){
    Box b1(10);
    b1.getDetails().display();
    return 0;
}
