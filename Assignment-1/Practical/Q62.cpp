//Q62.Write a c++ program to create number guessing name where the user has to guess number between 1 and 100 using a while loop.
#include <iostream>
using namespace std;
int main() {
    int number = 42; 
    int guess;
    cout << "Guess the number between 1 and 100: ";
    while (true) {
        cin >> guess;
        if (guess < number) {
            cout << "Too low! Try again: ";
        } else if (guess > number) {
            cout << "Too high! Try again: ";
        } else {
            cout << "Congratulations! You guessed the correct number: " << number << endl;
            break;
        }
    }
    return 0;
}
