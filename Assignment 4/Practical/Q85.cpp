//Q85.Create a program that uses exception handling and templates to implement a safe array class.
#include <iostream>
#include <stdexcept>
using namespace std;
template <typename T>
class SafeArray {
private:
    T arr[5]; 
public:
    void set(int index, T value) {
        if (index < 0 || index >= 5)
            throw out_of_range("Index out of range!");
        arr[index] = value;
    }
    T get(int index) {
        if (index < 0 || index >= 5)
            throw out_of_range("Index out of range!");
        return arr[index];
    }
};
int main() {
    SafeArray<int> myArray;
    try {
        myArray.set(0, 10);
        myArray.set(1, 20);
        cout << "Value at index 0: " << myArray.get(0) << endl;
        cout << "Value at index 1: " << myArray.get(1) << endl;

        // Trying to access invalid index
        cout << "Value at index 10: " << myArray.get(10) << endl;
    }
    catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
