//Q58.Create a program that writes a list of strings to a file.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("strings.txt");
    file<<"apple"<<endl;
    file<<"banana"<<endl;
    file<<"stawberry"<<endl;
    file.close();
    return 0;
}
