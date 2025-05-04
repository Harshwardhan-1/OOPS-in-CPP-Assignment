//Q78.Write a program to open a file in different modes (read, write, append) and demonstrate their effects.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream writefile("data.txt");
    writefile<<"this isn write mode:"<<endl;
    writefile.close();
    ofstream appendfile("data.txt");
    appendfile<<"this is read mode:"<<endl;
    appendfile.close();
    ifstream readfile("data.txt");
    string line;
    while(getline(readfile,line)){
        cout<<line<<endl;
        readfile.close();
    }
    return 0;
}
