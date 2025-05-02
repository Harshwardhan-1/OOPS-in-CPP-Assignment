//Q73.Implement a program that demonstrates the use of multiple catch blocks to handle different types of exceptions.
#include<iostream>
using namespace std;
int main(){
    try{
    int choice;
    cout<<"your choice:"<<endl;
    cin>>choice;
    if(choice==1){
        throw 10;
    }   
else if(choice==2){
    throw "x";
}
else if(choice==3){
    throw 3.14;
}
else{
    throw "no exception thrown";
}
}
catch(int x){
    cout<<"integer exception:"<<x<<endl;
}
catch(char c){
    cout<<"char exception:"<<c<<endl;
}
catch(float f){
    cout<<"float exception:"<<f<<endl;
}
    return 0;
}
