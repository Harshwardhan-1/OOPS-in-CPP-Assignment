// Q61.Create a class counter with a static data member to count the number of objects created.
#include<iostream>
#include<string>
using namespace std;
class Counter{
    static int count;
    public:
    Counter(){
    count++;
}
void displayCount(){
    cout<<"no of people count:"<<count<<endl;
}    
};
int Counter::count;
int main(){
    Counter obj1,obj2;
    obj1.displayCount();
    obj2.displayCount();
    Counter obj3;
    obj3.displayCount();

    return 0;
}