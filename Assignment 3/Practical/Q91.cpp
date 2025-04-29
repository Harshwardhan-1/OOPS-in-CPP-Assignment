//Q91.Implement a class polynomial with memeber function to add and multiply polynomials.
#include <iostream>
#include<string>
using namespace std;
class Polynomial {
private:
    int coeffs[10]; // max degree = 9
public:
    Polynomial() {
        for (int i = 0; i < 10; i++)
            coeffs[i] = 0;
    }
    void setCoeff(int power, int value) {
        coeffs[power] = value;
    }
    void display() {
        for (int i = 9; i >= 0; i--) {
            if (coeffs[i] != 0) {
                cout << coeffs[i];
                if (i > 0) cout << "x^" << i;
                if (i > 0) cout << " + ";
            }
        }
        cout << endl;
    }
    Polynomial add(Polynomial p) {
        Polynomial result;
        for (int i = 0; i < 10; i++) {
            result.coeffs[i] = coeffs[i] + p.coeffs[i];
        }
        return result;
    }
    Polynomial multiply(Polynomial p) {
        Polynomial result;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i + j < 10)
                    result.coeffs[i + j] += coeffs[i] * p.coeffs[j];
            }
        }
        return result;
    }
};
int main() {
    Polynomial p1, p2;
    p1.setCoeff(0, 1);
    p1.setCoeff(1, 2);
    p1.setCoeff(2, 3);
    p2.setCoeff(0, 2);
    p2.setCoeff(1, 1);
    p2.setCoeff(2, 4);
    cout << "P1: ";
    p1.display();
    cout << "P2: ";
    p2.display();
    Polynomial sum = p1.add(p2);
    cout << "P1 + P2: ";
    sum.display();
    Polynomial prod = p1.multiply(p2);
    cout << "P1 * P2: ";
    prod.display();
    return 0;
}
