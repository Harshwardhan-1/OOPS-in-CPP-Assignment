//Q83.Implement a program that uses random access to read and write data at specific positions in a binary file.
#include<iostream>
#include<fstream>
using namespace std;
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    Student s1 = {1, "John", 85.5};
    Student s2 = {2, "Jane", 90.0};
    Student s3 = {3, "Bob", 88.5};
    ofstream outFile("students.dat", ios::binary);
    outFile.write((char*)&s1, sizeof(s1));
    outFile.write((char*)&s2, sizeof(s2));
    outFile.write((char*)&s3, sizeof(s3));
    outFile.close();
    ifstream inFile("students.dat", ios::binary);
    inFile.seekg(sizeof(Student));
    Student temp;
    inFile.read((char*)&temp, sizeof(temp));
    cout<<temp.id<<" "<<temp.name<<" "<<temp.marks<<endl;
    inFile.close();
    fstream file("students.dat", ios::binary | ios::in | ios::out);
    file.seekp(2 * sizeof(Student));
    temp.marks = 95.0;
    file.write((char*)&temp, sizeof(temp));
    file.close();
    inFile.open("students.dat", ios::binary);
    inFile.seekg(2 * sizeof(Student));
    inFile.read((char*)&temp, sizeof(temp));
    cout<<temp.id<<" "<<temp.name<<" "<<temp.marks<<endl;
    inFile.close();
    return 0;
}
