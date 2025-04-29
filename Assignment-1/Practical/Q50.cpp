//Q50 Write a c++ program  tpo check if a given number is palindrome using a while loop.
#include<iostream>
using namespace std;
int main(){
    int i,orig ,rev=0;
    cout<<"enter number:";
    cin>>i;
  orig =i;
  while(i>0){
    rev=(rev*10)+i%10;
  i=i%10;
  }
  if(orig==rev){
    cout<<"pallindrome";
  }
  else{
    cout<<"not a palindrome";
  }
  return 0;
}