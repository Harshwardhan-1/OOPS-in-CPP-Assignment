//Q95.Create a program that uses file streams to merge the contents of multiple text files into a single file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string inputFile1 = "file1.txt";
    string inputFile2 = "file2.txt";
    string outputFile = "merged.txt";
    string line;
    ifstream inFile1(inputFile1);
    ifstream inFile2(inputFile2);
    ofstream outFile(outputFile);
    if (!inFile1.is_open() || !inFile2.is_open() || !outFile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    while (getline(inFile1, line)) {
        outFile << line << endl;
    }
    while (getline(inFile2, line)) {
        outFile << line << endl;
    }
    inFile1.close();
    inFile2.close();
    outFile.close();
    cout << "Files merged successfully." << endl;
    return 0;
}
