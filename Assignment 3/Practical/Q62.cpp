//Q62.Implement the class math with static function members for basic arithmatic operations.
#include<iostream>
#include<string>
using namespace std;
class Math{
public:
//arithmatic function +,-,*,/
static int add(int a,int b){
    return a+b;
}
static int subtract(int a ,int b){
    return a-b;
}

static int multiply(int a,int b){
    return a*b;
}
static double divide(double a,double b){
    return a/b;
}
void getInfo(){
    cout<<"add:"<<add(3,4)<<endl;
    cout<<"subtract:"<<subtract(7,6)<<endl;
    cout<<"Multiply:"<<multiply(5,3)<<endl;
    cout<<"divide:"<<divide(8,3)<<endl;
}
};
int main(){
   Math obj;
  
   obj.getInfo();
    return 0;
}