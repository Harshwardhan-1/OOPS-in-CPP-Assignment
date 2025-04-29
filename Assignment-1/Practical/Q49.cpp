//Q49 Write a c++ program to find the sum of all elements in an array using a for loop.
#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int n=sizeof(arr)/4;
int sum=0;
for (int i=1;i<n; i++){
    sum+=arr[i];
}
cout<<sum;
return 0;
}