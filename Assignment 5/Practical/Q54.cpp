//Q54.Create a program that formats output using manipulators such as setw, setprecision, and fixed.
#include<iostream>
#include<iomanip>// for setw,setprecision,fixed
using namespace std;
int main(){
    string item1="apple";
    string item2="banana";
    string item3="stawberry";
    double price1=1.23;
    double price2=2.12;
    double price3=1.22;
cout<<setw(10)<<"item"<<setw(10)<<"price"<<endl;
cout<<setw(10)<<item1<<setw(10)<<fixed<<setprecision(2)<<price1<<endl;
cout<<setw(10)<<item2<<setw(10)<<fixed<<setprecision(2)<<price2<<endl;
cout<<setw(10)<<item3<<setw(10)<<fixed<<setprecision(2)<<price3<<endl;    
return 0;
}
