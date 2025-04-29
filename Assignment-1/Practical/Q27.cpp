//Q27 Write a c++ program to calculate the sum of the first 50 natural number using a while loop.
#include<iostream>
using namespace std;
int main(){
 int sum=0;
 int i=1;
 while(i<=50){
    sum+=i;
    i++;
 }
 cout<<sum<<endl;
 return 0;
}