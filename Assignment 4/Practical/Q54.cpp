//Write a program to demonstrate  pointer arithmatic by creating an array and accessing its elements using pointers.
#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
int*ptr=ptr;
cout<<"Accessing elements pointers"<<endl;
for(int i=1;i<5;i++){
    cout << "Element " << i << ": " << *(ptr + i) << endl;
}
    return 0;
}
