//Q31 Write a program to check if a given number is prime number using a for loop.
#include<iostream>
using namespace std;
int main(){
int n,i; 
cout<<"enter n :";
cin>>n;
for(i=2;i<=n/2;i++){
    if(n%i==0)
    break;
}
if (i>n/2)
cout<<n<<"prime number";
else{
    cout<<"not a prime number";
}
}