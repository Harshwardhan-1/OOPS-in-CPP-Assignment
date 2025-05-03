//Q75. Write a program that uses exception handling to manage file input/output errors.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream file("data txt");
    if(!file){
        cout<<"file not open successfully:"<<endl;
    }
    else{
        cout<<"file open successfully:"<<endl;
        file.close();
    }
    return 0;
}
