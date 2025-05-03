//Q79.Create a function template to find the maximum of two values of any data type.
#include<iostream>
using namespace  std;
template<typename T>
T findMax(T a, T b){
    return (a>b)? a:b;
}
int main(){
cout<<findMax(10,20)<<endl;
cout<<findMax(2.23,3.12)<<endl;
    return 0;
}
