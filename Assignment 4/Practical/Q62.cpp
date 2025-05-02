//Q62.Create a class Counter with a member function that compares two objects using the this pointer.
#include<iostream>
#include<string>
using namespace std;
class Counter{
    public:
    int count;
void compare(Counter other){
  if(this->count==other.count){
    cout<<"counts are equal:"<<endl;
  }
  else{
    cout<<"counts are not equal"<<endl;
  }
}
};
int main(){
    Counter c1,c2;
    c1.count=5;
    c2.count=5;
    c1.compare(c2);
    return 0;
}
