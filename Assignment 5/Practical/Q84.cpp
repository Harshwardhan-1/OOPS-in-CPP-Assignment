//Q84.Create a program that reads and writes a structure to a binary file using random access.
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
    ofstream outFile("people.dat", ios::binary);
    outFile.write((char*)&p1, sizeof(p1));
    outFile.write((char*)&p2, sizeof(p2));
    outFile.close();
    fstream file("people.dat", ios::binary | ios::in | ios::out);
    Person temp;
    file.seekg(sizeof(Person));
    file.read((char*)&temp, sizeof(temp));
    temp.salary = 65000;
    file.seekp(sizeof(Person));
    file.write((char*)&temp, sizeof(temp));
    file.seekg(sizeof(Person));
    file.read((char*)&temp, sizeof(temp));
    cout<<temp.id<<" "<<temp.name<<" "<<temp.salary<<endl;
    file.close();
    return 0;
}
