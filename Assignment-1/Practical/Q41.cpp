//Q41 Write a c++ program  to check if a given number is a palindrome using a while loop.
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
    cout<<"palidrome:";
  }else{
      cout<<"not palidrome:";
    
  }
}

