//Q69.Write a program that appends new data to an existing file.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream file("data.txt",ios::app);
    string input;
    cout<<"enter text:"<<endl;
    getline(cin,input);
    file<<input<<endl;
    file.close();
    cout<<"data append to file:"<<endl;
    return 0;
}
