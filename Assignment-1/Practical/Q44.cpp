//Q44 Write a c++ program to print a pattern using nested for loops.
#include<iostream>
using namespace std;
int main(){
    for (int i=0;i<=10;i++){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
    return 0;
}