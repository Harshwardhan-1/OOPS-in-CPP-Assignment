//Q63.Write a program that uses manipulators to format floating-point numbers with different precisions.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float num =314.1234;
    cout<<fixed<<setprecision(2)<<num<<endl;
    cout<<fixed<<setprecision(4)<<num<<endl;
    cout<<fixed<<setprecision(6)<<num<<endl;
    return 0;
}
