//Write a c++ program to find the GCD(Greatest common divisor) of two numbers using a while loop.
#include<iostream>
using namespace std;
int main(){
	int a , b ;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;

    while(b != 0){
        int temp = b;
        b = a%b ;
        a = temp;
    }

    cout<<"GDC is "<<a;
	return 0;
}