//Q90.Write a program that uses file streams to create a simple text editor.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string filename = "document.txt";
    string userInput;
    ofstream outFile(filename);
    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    cout << "Enter text to save to the file (type 'Exit' to stop):" << endl;
    while (true) {
        getline(cin, userInput);
        if (userInput == "Exit") {
            break;
        }
        outFile << userInput << endl;
    }
    outFile.close();
    ifstream inFile(filename);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    cout << "File contents:";
    while (getline(inFile, userInput)) {
        cout << userInput << endl;
    }
    inFile.close();
    return 0;
}
