//Q71.Implement a program to write binary data to a file using ofstream.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("data.txt",ios::binary);
    char data[]="hello";
    file.write(data,sizeof(data));
    file.close();
    cout<<"binary data written to file:"<<endl;
    return 0;
}
