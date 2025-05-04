//Q86.Implement a program that reads and displays the contents of a binary file in reverse order.
#include<iostream>
#include<fstream>
using namespace std;
struct Person {
    int id;
    char name[50];
    float salary;
};
int main() {
    Person p1 = {1, "Harshwardhan", 5000};
    Person p2 = {2, "Jay", 2000};
    Person p3 = {3, "Ram", 3000};
    ofstream outFile("people.dat", ios::binary);
    outFile.write((char*)&p1, sizeof(p1));
    outFile.write((char*)&p2, sizeof(p2));
    outFile.write((char*)&p3, sizeof(p3));
    outFile.close();
    ifstream inFile("people.dat", ios::binary);
    Person temp[3];
    inFile.read((char*)&temp, sizeof(temp));
    inFile.close();
    for (int i = 2; i >= 0; i--) {
        cout << temp[i].id << " " << temp[i].name << " " << temp[i].salary << endl;
    }
    return 0;
}
