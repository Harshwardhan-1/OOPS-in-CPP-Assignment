//Q85.Write a program that updates specific records in a binary file using random access.
#include<iostream>
#include<fstream>
using namespace std;
struct Person {
    int id;
    char name[50];
    float salary;
};
int main() {
    Person p1 = {1, "Harshwardhan", 50000};
    Person p2 = {2, "Jay", 60000};
    Person p3 = {3, "Ram", 70000};
    ofstream outFile("people.dat", ios::binary);
    outFile.write((char*)&p1, sizeof(p1));
    outFile.write((char*)&p2, sizeof(p2));
    outFile.write((char*)&p3, sizeof(p3));
    outFile.close();
    fstream file("people.dat", ios::binary | ios::in | ios::out);
    file.seekp(sizeof(Person));  
    p2.salary = 65000;  
    file.write((char*)&p2, sizeof(p2));
    file.seekg(sizeof(Person));  
    file.read((char*)&p2, sizeof(p2));
    cout << p2.id << " " << p2.name << " " << p2.salary << endl;
    file.close();
    return 0;
}
