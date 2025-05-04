//Q81.Write a program to open a file in truncation mode and demonstrate its effect.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream file("truncfile.txt");
file<<"Original content."<<endl;
file.close();
ofstream truncFile("truncfile.txt", ios::trunc);
truncFile<<"New content after truncation."<<endl;
truncFile.close();
ifstream readFile("truncfile.txt");
string line;
while(getline(readFile, line)){
cout<<line<<endl;
}
readFile.close();
return 0;
}
