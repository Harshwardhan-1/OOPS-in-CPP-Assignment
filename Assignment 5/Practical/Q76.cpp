//Q76.Create a program that uses the seekg and tellg functions to manipulate file pointers.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream file("myfile.txt");
if(!file){
cout<<"File not found"<<endl;
return 1;
}
file.seekg(0, ios::end);
int size = file.tellg();
cout<<"File size: "<<size<<endl;
file.seekg(2);
char ch;
file.get(ch);
cout<<"Character at position 2: "<<ch<<endl;
int pos = file.tellg();
cout<<"Current read position: "<<pos<<endl;
file.close();
return 0;
}
