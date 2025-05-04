//Q64.Implement a program that uses setw to align text output in columns.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
      cout<<setw(10)<<"Name"<<setw(15)<<"Age"<<setw(20)<<"City"<<endl;
      cout<<setw(10)<<"Harsh"<<setw(15)<<"18"<<setw(20)<<"India"<<endl;
      cout<<setw(10)<<"Jay"<<setw(15)<<"19"<<setw(20)<<"Australia"<<endl;
      cout<<setw(10)<<"Ram"<<setw(15)<<"20"<<setw(20)<<"America"<<endl;
    return 0;
}
