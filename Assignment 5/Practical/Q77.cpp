//Q77.Write a program that uses the seekp and tellp functions to set and retrieve the put pointer position.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("data.txt");
    if(!file){
        cout<<"error opening file:"<<endl;
        return 1;
    }
    file.seekp(5);
    cout<<"A";
    int pos=file.tellp();
    cout<<"current write position:"<<pos<<endl;
    file.close();
    return 0;
}
