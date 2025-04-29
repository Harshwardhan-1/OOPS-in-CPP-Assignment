//Q69.Write a class logger with a destructor that logs message when the object is destroyed.
#include<iostream>
#include<string>
using namespace std;
class logger{
public:
string message;
public:
logger(string m){
    message=m;
    cout<<"logged successfully"<<message<<endl;
}
~logger(){
    cout<<"logger destroyted"<<message<<endl;
}
};
int main(){
    logger l1("tracking");
    logger l2("checking");
    return 0;
} 
