//Q56.Write a c++ program to calculate the sum of harmonic series up to n terms using a for loops.
#include <iostream>
using namespace std;
int main() {
    int n;
    double sum = 0.0;
    cout << "Enter the number of terms (n): ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }
    cout << "Sum of harmonic series up to " << n << " terms is: " << sum << endl;

    return 0;
}
