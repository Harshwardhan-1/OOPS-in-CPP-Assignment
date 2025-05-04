//Q68.Create a program that copies the contents of one file to another using file streams.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream source("source.txt");
ofstream destination("copy.txt");
char ch;
if(!source){
cout<<"Source file not found!"<<endl;
return 1;
}
while(source.get(ch)){
destination.put(ch);
}
source.close();
destination.close();
cout<<"File copied successfully."<<endl;
return 0;
}
