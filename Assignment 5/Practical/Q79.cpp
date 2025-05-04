//Q79.Implement a program that reads from and writes to a file in binary mode.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
int num=123;
ofstream outFile("binaryfile.bin", ios::binary);
outFile.write((char*)&num, sizeof(num));
outFile.close();
int readNum;
ifstream inFile("binaryfile.bin", ios::binary);
inFile.read((char*)&readNum, sizeof(readNum));
inFile.close();
cout<<"Number read from file: "<<readNum<<endl;
return 0;
}
