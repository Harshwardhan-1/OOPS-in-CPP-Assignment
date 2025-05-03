//Q87.Implement a class Polynomial with member functions to add and multiply polynomials using operator overloading.
#include <iostream>
using namespace std;
class Polynomial {
public:
    int a, b, c; 
    Polynomial() : a(0), b(0), c(0) {}
    void input() {
        cout << "Enter coefficients a b c for ax^2 + bx + c: ";
        cin >> a >> b >> c;
    }
    void display() {
        cout << a << "x^2 + " << b << "x + " << c << endl;
    }
    Polynomial operator+(Polynomial p) {
        Polynomial temp;
        temp.a = a + p.a;
        temp.b = b + p.b;
        temp.c = c + p.c;
        return temp;
    }
    Polynomial operator*(Polynomial p) {
        Polynomial temp;
        temp.a = a * p.c + b * p.b + c * p.a; // simplified just for x^2 term
        temp.b = b * p.c + c * p.b;
        temp.c = c * p.c;
        return temp;
    }
};
int main() {
    Polynomial p1, p2, sum, product;
    p1.input();
    p2.input();
    sum = p1 + p2;
    product = p1 * p2;
    cout << "Sum: ";
    sum.display();
    cout << "Product (approx): ";
    product.display();
    return 0;
}
