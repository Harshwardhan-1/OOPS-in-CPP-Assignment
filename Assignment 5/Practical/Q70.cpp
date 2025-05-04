//Q70.Write a program to read binary data from a file using ifstream.
#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ifstream file("data.bin", ios::binary);  
    if (!file){
        cout<<"Error opening the file!"<<endl;
        return 1;
    }
    char ch;
    while (file.get(ch)){  
        cout<<ch;  
    }
    file.close();  
    return 0;
}
