//Q78.Implement a class template Stack with member functions to push, pop, and display elements.
#include <iostream>
using namespace std;
template <typename T>
class Stack {
private:
    T arr[100];       // Fixed-size array for simplicity
    int top;

public:
    Stack() {
        top = -1;     // Stack is empty initially
    }
    void push(T value) {
        if (top >= 99) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = value;
            cout << "Pushed: " << value << endl;
        }
    }
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << "Popped: " << arr[top--] << endl;
        }
    }
    void display() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Stack<int> s;  
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
}
