//Q56.Write a program to demonstrate the use of ifstream and ofstream for file input and output.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string name;
    int age;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    ofstream outFile("data.txt");
    if (outFile.is_open()) {
        outFile << name << endl;
        outFile << age << endl;
        outFile.close(); 
        cout << "Data written to file successfully.\n";
    } else {
        cout << "Unable to open file for writing.\n";
        return 1;
    }
    ifstream inFile("data.txt");
    if (inFile.is_open()) {
        string fileName;
        int fileAge;
        getline(inFile, fileName);
        inFile >> fileAge;
        inFile.close(); 
        cout << " Data read from file";
        cout << "Name: " << fileName << endl;
        cout << "Age : " << fileAge << endl;
    } else {
        cout << "Unable to open file for reading.\n";
        return 1;
    }
    return 0;
}
