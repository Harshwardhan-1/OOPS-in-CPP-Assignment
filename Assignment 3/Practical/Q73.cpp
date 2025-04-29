//Q73/Write a class vector and overload the "[]" to access elements of the vector.
#include <iostream>
#include<string>
using namespace std;
class Vector {
private:
    int* data;
    int size;
public:
    Vector(int s) {
        size = s;
        data = new int[size];
    }
    ~Vector() {
        delete[] data;
    }
    int& operator[](int index) {
        return data[index]; 
    }
    int getSize() {
        return size;
    }
};
int main() {
    Vector v(5);
    for (int i = 0; i<v.getSize(); i++) {
        v[i] = i + 1;
    }
    for (int i = 0; i<v.getSize(); i++) {
        std::cout << "v[" << i << "] = " << v[i] << std::endl;
    }
    return 0;
}
