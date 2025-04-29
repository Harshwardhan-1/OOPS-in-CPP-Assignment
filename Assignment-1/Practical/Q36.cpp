//Q36 Write a c++ program to print the elements of an array in reverse order using a for loop.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/4;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
return 0;
}
