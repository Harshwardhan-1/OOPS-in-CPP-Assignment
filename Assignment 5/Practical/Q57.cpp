//Q57.Implement a program that reads a list of integers from a file and displays them on the console.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream file("numbers.txt");
int num;
while(file>>num){
cout<<num<<endl;
}
file.close();
return 0;
}
