//Q30 Write a c++ program to reverse the given number using while loop.
#include<iostream>                 
using namespace std;
int main(){
  int n;
  cout<<"Enter a number:";
  cin>>n;
  int r=0;
  while(n!=0){
    int ld = n%10;
    r*=10;
    r+=ld;
    n/=10;
 }
  cout<<r<<endl;
  return 0;
}
