//Q92.Create a program that uses file streams to search for a specific word in a text file and count its occurrences.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string filename = "sample.txt";
    string searchWord;
    string line;
    int wordCount = 0;
    cout<<"Enter the word to search for:";
    cin>>searchWord;

    ifstream file(filename);
    if (!file.is_open()){
        cout<<"Error opening the file!"<<endl;
        return 1;
    }
    while (getline(file, line)) {
        size_t pos = line.find(searchWord);
        while (pos != string::npos) {
            wordCount++;
            pos = line.find(searchWord, pos + 1);
        }
    }
    file.close();
    cout<<"The word'"<<searchWord<<"'appeared"<<wordCount<<"times."<<endl;

    return 0;
}
