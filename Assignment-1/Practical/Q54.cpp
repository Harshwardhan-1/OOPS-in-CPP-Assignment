//Q54 Write a c++ program  to print all prime numbers between two given numbers using a for loop.
 #include<iostream>
 using namespace std;
 int main(){
  int i=1,count=0,j;
  cout<<"enter a number:";
  cin>>i;
  for(j=1;j<=i;j++){
    if(i%j==0)
    count++;

  }
  if(count==2){
  cout<<"prime number:";
  }
  else
  cout<<"not a prime number:";
 }