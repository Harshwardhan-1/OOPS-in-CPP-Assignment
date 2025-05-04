//Q91.Implement a program that reads and processes a CSV file using file streams.
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    ifstream file("data.csv");  
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string name, age, salary;
        getline(ss, name, ',');   
        getline(ss, age, ',');   
        getline(ss, salary, ','); 
        cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    }

    file.close();  // Close the file after reading
    return 0;
}
