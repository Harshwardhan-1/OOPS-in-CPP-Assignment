//Q66.Write a program to read data from a text file and display it on the console.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream file("data.txt");
    char ch;
    while(file.get(ch)){
        cout<<ch;
    }
    file.close();
        return 0;
}
