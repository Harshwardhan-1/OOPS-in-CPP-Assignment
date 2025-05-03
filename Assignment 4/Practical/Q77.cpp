//Q77.Write a function template to perform a linear search on an array of any data type.
#include <iostream>
using namespace std;
template <typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Found, return index
        }
    }
    return -1; 
}
int main() {
    // Example with integers
    int intArr[] = {1, 2, 3, 4, 5};
    int intKey = 3;
    int index = linearSearch(intArr, 5, intKey);
    cout << "Integer found at index: " << index << endl;

    // Example with characters
    char charArr[] = {'a', 'b', 'c', 'd'};
    char charKey = 'c';
    int charIndex = linearSearch(charArr, 4, charKey);
    cout << "Character found at index: " << charIndex << endl;
    return 0;
}
