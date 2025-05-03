//Q97.Create a program that uses exception handling and function templates to implement a robust mathematical library.
#include <iostream>
#include <cmath>      
#include <stdexcept>  
using namespace std;
template <typename T>
T divide(T a, T b) {
    if (b == 0)
        throw runtime_error("Division by zero");
    return a / b;
}
template <typename T>
T safeSqrt(T x) {
    if (x < 0)
        throw runtime_error("Square root of negative number");
    return sqrt(x);
}
int main() {
    try {
        cout << "Division: " << divide(10.0, 2.0) << endl;
        cout << "Square root: " << safeSqrt(25.0) << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
