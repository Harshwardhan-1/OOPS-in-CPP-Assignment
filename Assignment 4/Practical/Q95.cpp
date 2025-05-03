//Q95.Write a program that uses smart pointers and templates to implement a memory-efficient and type-safe container.
#include <iostream>
#include <memory>
using namespace std;
template <typename T>
class Container {
    unique_ptr<T[]> data;
public:
    Container(int size) {
        data = make_unique<T[]>(size);
    }
    void set(int index, T value) {
        data[index] = value;
    }
    T get(int index) {
        return data[index];
    }
};
int main() {
    Container<int> c(3);
    c.set(0, 100);
    c.set(1, 200);
    c.set(2, 300);
    cout << c.get(0) << " " << c.get(1) << " " << c.get(2) << endl;
    return 0;
}
