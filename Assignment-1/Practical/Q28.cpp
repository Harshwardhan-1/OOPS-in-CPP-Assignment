//Q28 Write a c++ program to print the multiplication table of a given number using do while loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter a number:";
    cin>>n;
    int i=1;
    do{
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    }
    while(i<=10);
    return 0;
}