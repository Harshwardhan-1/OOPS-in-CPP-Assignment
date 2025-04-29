//Q64.Write a c++ program to convert a decimal number to a binary number using a while loop.
#include <iostream>
using namespace std;
int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    int binary = 0, place = 1;
    while (decimal > 0) {
        binary += (decimal % 2) * place; 
        decimal /= 2;  
        place *= 10;    
    }
    cout << "Binary equivalent: " << binary << endl;
    return 0;
}
