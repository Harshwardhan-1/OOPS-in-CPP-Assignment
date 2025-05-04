//Q89.Create a program that logs error messages to a file using file streams.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void logError(const string& errorMessage) {
    ofstream logFile("error_log.txt", ios::app);  
    if (logFile.is_open()) {
        logFile << errorMessage << endl;  
        logFile.close();
    } else {
        cout << "Unable to open log file!" << endl;
    }
}
int main() {
    logError("Error: File not found.");
    logError("Error: Unable to connect to database.");
    logError("Error: Invalid input.");
    cout << "Error messages have been logged." << endl;
    return 0;
}
