//Q97.Implement a program that uses streams to perform basic encryption and decryption of text files.
#include <iostream>
#include <fstream>
using namespace std;
void encrypt(const string& inputFile, const string& outputFile, int key) {
    ifstream in(inputFile);
    ofstream out(outputFile);
    char ch;
    while (in.get(ch)) {
        ch = ch + key;
        out.put(ch);
    }
    in.close();
    out.close();
}
void decrypt(const string& inputFile, const string& outputFile, int key) {
    ifstream in(inputFile);
    ofstream out(outputFile);
    char ch;
    while (in.get(ch)) {
        ch = ch - key;
        out.put(ch);
    }
    in.close();
    out.close();
}
int main() {
    string original = "plain.txt";
    string encrypted = "encrypted.txt";
    string decrypted = "decrypted.txt";
    int key = 3;
    encrypt(original, encrypted, key);
    decrypt(encrypted, decrypted, key);
    cout<<"Done"<<endl;
    return 0;
}
