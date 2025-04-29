//Q68.Create a class Dynamic array with a destructor that deallocates dynamically allocated memory.
#include<iostream>
#include<string>
using namespace std;
class DynamicArray{
    private:
    int*arr;
    public:
    DynamicArray(){
        arr=new int[5];
        cout<<"memory allocated for array:"<<endl;
    }
    ~DynamicArray(){
        delete[]arr;
        cout<<"memory deallocated:"<<endl;
    }
};
int main(){
    DynamicArray myArray;
    return 0;
}