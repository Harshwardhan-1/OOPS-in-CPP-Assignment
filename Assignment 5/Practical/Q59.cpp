//Q59.Write a program to demonstrate unformatted input and output using get and put functions.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
   cout<<"enter text:"<<endl;
    char ch;
   while(cin.get(ch)){
    if(ch=='#')break;
cout.put(ch);   
}
    return 0;
}
