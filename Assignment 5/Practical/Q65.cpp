//Q65.Create a program that uses manipulators to format currency and percentage values.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double amount =312.12;
    double percentage=0.112;
    cout<<fixed<<setprecision(2)<<setw(10)<<"$"<<amount<<endl;
    cout<<fixed<<setprecision(2)<<setw(10)<<"percentage"<<percentage*100<<"%"<<endl;
    return 0;
}
