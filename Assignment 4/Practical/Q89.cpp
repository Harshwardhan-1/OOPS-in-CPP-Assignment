//Q89.Write a program that uses class templates and exception handling to implement a generic and robust data structure.
#include <iostream>
using namespace std;
template <typename T>
class Stack {
    T arr[5];
    int top;
public:
    Stack() {
        top = -1;
    }
    void push(T value) {
        if (top >= 4)
            throw overflow_error("Stack overflow!");
        arr[++top] = value;
    }
    T pop() {
        if (top < 0)
            throw underflow_error("Stack underflow!");
        return arr[top--];
    }
    void display() {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};
int main() {
    Stack<int> s;
    try {
        s.push(10);
        s.push(20);
        s.push(30);
        s.display();
        cout << "Popped: " << s.pop() << endl;
        s.display();
    }
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
