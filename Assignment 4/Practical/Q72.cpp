//Q72.Write a program that handles division by zero using exception handling.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter any number(a,b)"<<endl;
    cin>>a,b;
    try{
        if(b==0){
            throw"division by zero error!";
        }
        cout<<"result:"<<a/b<<endl;
    }
    catch(const char*msg){
        cout<<"message:"<<msg<<endl;
    }
    return 0;
}
