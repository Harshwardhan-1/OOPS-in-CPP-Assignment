//Q61.Create a program that uses formatted input and output to display a table of data.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<left<<setw(10)<<"ID"<<setw(15)<<"Name"<<setw(10)<<"Score"<<endl;
    cout<<left<<setw(10)<<"1"<<setw(15)<<"HARSHWARDHAN"<<setw(10)<<"98"<<endl;
    cout<<left<<setw(10)<<"2"<<setw(15)<<"Ram"<<setw(15)<<"97"<<endl;
    cout<<left<<setw(10)<<"3"<<setw(15)<<"Krishna"<<setw(15)<<"96"<<endl;
    return 0;
}
