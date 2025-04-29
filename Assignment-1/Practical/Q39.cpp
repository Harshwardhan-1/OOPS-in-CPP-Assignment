//Q39 Write a c++ program to print all the prime numbers between 1 and 100 using for loop.
#include<iostream>
using namespace std;
int main(){
    int n,i;
    for(n=1;n<=100;n++){
   for(i=2;i<=n/2;i++){
    if(n%i==0)
    break;
   }
 if(i>n/2)
 cout<<n<<" ";
    }
    return 0;
}
