//Q59.Write a c++ program to find the lcm(least common multiple) of two number using a while loop.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int larger = (num1 > num2) ? num1 : num2;
    int lcm = larger;
    while (true) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << endl;
            break;
        }
        lcm += larger;
    }
    return 0;
}
