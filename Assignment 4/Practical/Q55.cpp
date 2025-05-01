//Q55.Implement a program that dynamically allocated memory for an integer array and initializes it using pointers.
#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter array size:";
    cin>>size;
    int*arr = new int[size];
    for (int i=0;i<size;i++) {
        cout<<"Enter element "<<i + 1<<":";
        cin>>arr[i];
    }
    cout<<"Array elements:";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}
