//Q87.Write a program that uses streams to read user input, process it, and write the results to a file.
#include<iostream>
#include<fstream>
using namespace std;
int main() {
    string name;
    int age;
    float salary;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your salary: ";
    cin >> salary;
    ofstream outFile("user_info.txt");
    if (outFile.is_open()) {
        outFile << "Name: " << name << endl;
        outFile << "Age: " << age << endl;
        outFile << "Salary: " << salary << endl;
        outFile.close();
        cout << "Data has been written to user_info.txt" << endl;
    } else {
        cout << "Unable to open file!" << endl;
    }
    return 0;
}
