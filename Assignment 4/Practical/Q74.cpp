//Q74.Create a custom exception class InvalidAgeException and use it to handle invalid age input in a program.
#include<iostream>
using namespace std;
class InvalidAgeException {};
int main(){
    int age;
    cout<<"your age is:"<<endl;
    cin>>age;
try{
    if(age<0 || age>120){
        throw InvalidAgeException();
    }
    cout<<"your age is:"<<age<<endl;
}
catch(InvalidAgeException){
cout<<"invalid age entered"<<endl;
}
 return 0;
}
