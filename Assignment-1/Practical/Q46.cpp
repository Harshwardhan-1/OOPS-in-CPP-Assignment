//Q46 Write a c++ program to calculate the sum of digits of a given number using a while loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    cout<<sum;
    return 0;
}
