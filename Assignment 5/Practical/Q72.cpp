//Q72.Create a program that demonstrates the use of fstream for both input and output operations.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file("data.txt",ios::in | ios::out |  ios::app);
    string text;
    cout<<"write text here:"<<endl;
    getline(cin,text);
    file<<text<<endl;
    file.seekg(0);
    string line;
    while(getline(file,line)){
        file<<line<<endl;
    }
    file.close();
    return 0;
}
