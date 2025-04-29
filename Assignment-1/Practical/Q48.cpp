//Q48 Write a c++ program to check if a given number is an armstrong number using a while loop.
 #include<iostream>
 using namespace std; 
 int main(){
     int n,r,sum=0,temp;
     cout<<"enter a number:";
     cin>>n;
     temp=n;
     while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
  n/=10;
     }
     if(temp==sum){
        cout<<"Armstrong";
     }
     else{
        cout<<"Not Armstrong";
     }
     return 0;
 }