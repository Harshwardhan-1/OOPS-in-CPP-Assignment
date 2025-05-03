//Q88.Create a program that uses function pointers to implement a callback mechanism.
#include<iostream>
using namespace std;
void hello(){
    cout<<"hello:"<<endl;
}
void call(void(*f)()){
    cout<<"working:"<<endl;
    f();
}
int main(){
    call(hello);
    return 0;
}
