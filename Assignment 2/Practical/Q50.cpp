//Q50.Write a program to illustrate the concept of function pointers and callback functions.
#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int multiply(int a,int b){
    return a*b;
}
void operation(int x,int y,int(*funcPtr)(int,int)){
    cout<<"result:"<<funcPtr(x,y)<<endl;
}
int main(){
    int(*functionPtr)(int,int)=add;
    cout<<"using function pointers directly:"<<endl;
    cout<<"Addition of 10 and 5="<<functionPtr(10,5)<<endl;
cout<<"using callback function with add:"<<endl;
operation(10,5,add);
cout<<"callback function with multiply:"<<endl;
operation(10,5,multiply);
    return 0;
}