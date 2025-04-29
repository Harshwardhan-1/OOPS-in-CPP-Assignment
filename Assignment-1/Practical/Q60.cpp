//Q60.Write a c++ program to print the fibonacci series up to n terms using a for loop.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    int first = 0, second = 1, next;
    cout << "Fibonacci Series up to " << n << " terms: ";
    for (int i = 1; i <= n; ++i) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout<<endl;
    return 0;
}
