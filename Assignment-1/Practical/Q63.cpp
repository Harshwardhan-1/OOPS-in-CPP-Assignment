//Q63.Write a c++ program  to count the frequency of each character in a string using a for loop.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int freq[256] = {0}; 
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); ++i) {
        freq[str[i]]++; 
    }
    cout << "Character frequencies in the string:\n";
    for (int i = 0; i < 256; ++i) {
        if (freq[i] > 0) {
            cout << char(i) << ": " << freq[i] << endl;
        }
    }
    return 0;
}
