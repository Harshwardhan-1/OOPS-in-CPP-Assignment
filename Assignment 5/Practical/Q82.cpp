//Q82.Write a program to read and write binary data to a file using the read and write functions.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
int number = 50;
ofstream outFile("binarydata.bin", ios::binary);
outFile.write((char*)&number, sizeof(number));
outFile.close();
int readNumber;
ifstream inFile("binarydata.bin", ios::binary);
inFile.read((char*)&readNumber, sizeof(readNumber));
inFile.close();
cout<<"Number read from file: "<<readNumber<<endl;
return 0;
}
