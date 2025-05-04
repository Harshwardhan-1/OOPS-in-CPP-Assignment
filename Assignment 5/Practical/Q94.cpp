//Q94.Implement a program that compresses and decompresses text files using simple encoding techniques.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void compressFile(const string& inputFile, const string& outputFile) {
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);
    char currentChar, prevChar;
    int count = 1;
    inFile.get(prevChar);
    while (inFile.get(currentChar)) {
        if (currentChar == prevChar) {
            count++;
        } else {
            outFile << prevChar << count;
            prevChar = currentChar;
            count = 1;
        }
    }
    outFile << prevChar << count;
    inFile.close();
    outFile.close();
}
void decompressFile(const string& inputFile, const string& outputFile) {
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);
    char currentChar;
    int count;
    while (inFile >> currentChar >> count) {
        for (int i = 0; i < count; i++) {
            outFile << currentChar;
        }
    }
    inFile.close();
    outFile.close();
}
int main() {
    compressFile("input.txt", "compressed.txt");
    decompressFile("compressed.txt", "decompressed.txt");
    return 0;
}
