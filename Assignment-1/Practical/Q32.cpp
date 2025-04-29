//Q32 Write a c++ program to print the Fibonacci series up to a given number of terms using a for loop.
#include<iostream>

using namespace std;

int main(){
	int n ,x,y,z;
    cout<<"enter any number:";
    cin>>n;
   x=0;
   y=1;
   for(z=0;z<=n;z=x+y){
    cout<<z;
    x=y;
    y=z;
   }
   return 0;
}