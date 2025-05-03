//Q99.Implement a program that demonstrates the use of virtual functions and templates to create a generic and reusable algorithm library.
#include <iostream>
using namespace std;
template <typename T>
class Algorithm {
public:
    virtual T compute(T a, T b) = 0;
    virtual ~Algorithm() {}
};
template <typename T>
class Add : public Algorithm<T> {
public:
    T compute(T a, T b) override {
        return a + b;
    }
};
template <typename T>
class Max : public Algorithm<T> {
public:
    T compute(T a, T b) override {
        return (a > b) ? a : b;
    }
};
int main() {
    Algorithm<int>* addInt = new Add<int>();
    cout << "Addition: " << addInt->compute(5, 3) << endl;
    Algorithm<float>* maxFloat = new Max<float>();
    cout << "Maximum: " << maxFloat->compute(4.5f, 6.3f) << endl;

    delete addInt;
    delete maxFloat;
    return 0;
}
