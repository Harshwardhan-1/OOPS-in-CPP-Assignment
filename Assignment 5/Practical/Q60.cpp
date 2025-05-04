//Q60.Implement a program that reads and writes characters using get and put.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char c;
    cout<<"enter text statrt with #:"<<endl;
    while(cin.get(c)){
        if(c=='#')break;
        cout.put(c);
    }
return 0;
}
