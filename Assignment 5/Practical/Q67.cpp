//Q67.Implement a program to write user input to a text file.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("output.txt");
     string input;
       cout<<"enter text to write file:"<<endl;
       getline(cin,input);
       file<<input;
       file.close();
       cout<<"data written to output.txt:"<<endl;
    return 0;
}
