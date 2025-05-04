//Q62.Write a program that uses getline to read a full line of text and display it.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cout<<"enter text :"<<endl;
    getline(cin,input);
    cout<<"you entered:"<<input<<endl;
    return 0;
}
