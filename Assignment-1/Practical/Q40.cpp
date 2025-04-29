//Q40 Write a c++ program to find the sum of the digits of a given number using a while loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n/=10;
    }
    cout<<sum;
    return 0;
}