//Q82.Create a class template Queue with member functions to enqueue, dequeue, and display
elements.
#include <iostream>
using namespace std;
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
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
    // Example with integers
    int arr[] = {5, 3, 1, 4, 2};
    int size = 5;
    cout << "Before sorting: ";
    display(arr, size);
    bubbleSort(arr, size);
    cout << "After sorting: ";
    display(arr, size);
    return 0;
}
