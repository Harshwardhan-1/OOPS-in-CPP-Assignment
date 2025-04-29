//Q35 Write a program to find the largest number in an array using a for loop.
#include<iostream>
using namespace std;
 int main (){
    int arr[]={12,45,67,56,46,88,58,34,23,86};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for (int i=1;i<=n;i++){
    if (arr[i]>mx) mx=arr[i];
 }
 cout<<mx;
}
