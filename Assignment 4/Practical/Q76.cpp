//Q76.Implement a program that demonstrates the use of the finally block to release resources in exception handling.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream file;
try{
file.open("data txt");
if(!file){
    throw"file is not opening";
}
cout<<"file open successfully";
throw"there is error opening that box";
}
catch(const char*msg){
    cout<<"Exception"<<msg<<endl;
}
if(file.is_open()){
    file.close();
cout<<"file closes in finally block";
}
    return 0;
}
