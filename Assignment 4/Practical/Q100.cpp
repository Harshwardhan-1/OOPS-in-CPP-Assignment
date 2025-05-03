//Q100.Create a program that uses polymorphism, templates, and exception handling to implement a comprehensive and type-safe collection framework.
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;
template <typename T>
class Collection {
public:
    virtual void add(T item) = 0;
    virtual T get(int index) = 0;
    virtual void show() = 0;
    virtual ~Collection() {}
};
template <typename T>
class SimpleList : public Collection<T> {
    vector<T> data;
public:
    void add(T item) override {
        data.push_back(item);
    }
    T get(int index) override {
        if (index < 0 || index >= data.size())
            throw out_of_range("Invalid index");
        return data[index];
    }
    void show() override {
        for (T item : data)
            cout << item<<" ";
        cout<<endl;
    }
};
int main() {
    try {
        SimpleList<int> nums;
        nums.add(1);
        nums.add(2);
        nums.add(3);
        nums.show();
        cout<<"Item at index 1:"<<nums.get(1)<<endl;
        SimpleList<string> words;
        words.add("hello");
        words.add("world");
        words.show();
    } catch (exception& e) {
        cout<<"Error:"<<e.what()<<endl;
    }
    return 0;
}
