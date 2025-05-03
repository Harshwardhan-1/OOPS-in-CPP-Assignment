//Q81.Implement a function template to perform bubble sort on an array of any data type.
#include <iostream>
using namespace std;
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
template <typename T>
void display(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int intArr[] = {5, 2, 9, 1, 3};
    int size = 5;
    cout << "Before sorting: ";
    display(intArr, size);
    bubbleSort(intArr, size);
    cout << "After sorting: ";
    display(intArr, size);
    return 0;
}
