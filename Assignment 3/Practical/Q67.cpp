//Q67.Implement a class FileHandler with a destructor that closes an open file.
#include<iostream>
#include<string>
using namespace std;
class FileHandler{
    public:
    //constructor
    FileHandler(){
        cout<<"File open successfully"<<endl;
    }
    //destructor
    ~FileHandler(){
      cout<<"file closed successfully"<<endl;
    }
};
int main(){
    FileHandler fh;
    cout<<"you opened a file"<<endl;
    return 0;
}