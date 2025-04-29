//Q43 Write a c++ program to print the first N even numbers using a for loop.
#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"enter n:";
      cin>>n;
      for(int i=1;i<=n; i++){
        if (i%2==0){
            cout<<i<<" ";
        }

      }
      return 0;
}