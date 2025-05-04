//Q80.Create a program that demonstrates the difference between text and binary file modes.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
int num=100;
ofstream textFile("textmode.txt"); 
textFile<<num;
textFile.close();
ofstream binaryFile("binarymode.bin", ios::binary); 
binaryFile.write((char*)&num, sizeof(num));
binaryFile.close();
cout<<"Data written in text and binary modes."<<endl;
return 0;
}
