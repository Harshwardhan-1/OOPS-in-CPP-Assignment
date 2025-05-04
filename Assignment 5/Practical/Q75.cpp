//Q75.Implement a program to create, open, and close files using file streams
#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream file("myfile.txt");
file<<"Hello file!"<<endl;
file.close();
ifstream readFile("myfile.txt");
string line;
getline(readFile, line);
cout<<line<<endl;
readFile.close();
return 0;
}
