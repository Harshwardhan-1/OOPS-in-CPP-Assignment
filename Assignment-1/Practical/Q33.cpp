//Q33 Write a c++ program  to count the number of digits in given number using a while loop.
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter n:";
    cin>>n;
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<count;
}


