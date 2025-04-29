//Q42 Write a c++ program to find the smallest number in an array using for loop.
#include<iostream>
using namespace std;
 int main (){
    int arr[]={12,45,67,56,46,88,58,34,23,86};
    int n=sizeof(arr)/4;
    int mn=arr[0];
    for (int i=1;i<n;i++){
    if (arr[i]<mn) mn=arr[i];
 }
 cout<<mn;
}
