//Q51.Create a program that reads and displays multiple lines of text using cin and cout.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    cout<<"no of lines 3:"<<endl;
    cin>>line;
    getline(cin,line);
    cout<<"LIne 1:"<<line<<endl;
    getline(cin,line);
    cout<<"line 2:"<<line<<endl;
    getline(cin,line);
    cout<<"line 3:"<<line<<endl;
    return 0;
}