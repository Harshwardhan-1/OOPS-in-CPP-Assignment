//Q93.Write a program that demonstrates the use of exception handling with file operations.
#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;
int main() {
    string filename = "example.txt";
    string data = "This is a sample text.";
    try {
        ofstream file(filename);
        if (!file.is_open()) {
            throw runtime_error("Unable to open file for writing.");
        }
        file << data;
        file.close();
        ifstream readFile(filename);
        if (!readFile.is_open()) {
            throw runtime_error("Unable to open file for reading.");
        }
        string fileContent;
        while (getline(readFile, fileContent)) {
            cout << fileContent << endl;
        }
        readFile.close();
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
