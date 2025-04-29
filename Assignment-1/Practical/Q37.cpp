//Q37 Write a  c++ program to calculate the average of numbers in an array using a for loop.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/4;
    double sum=0;
    for (int i=0; i<=n; i++){
        sum+=arr[i];
        }
        double avg =sum/n;
    cout<<avg;
    return 0;
}