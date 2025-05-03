//80.Write a class template LinkedList with member functions to insert, delete, and display nodes.
#include <iostream>
using namespace std;
template <typename T>
class LinkedList {
    struct Node {
        T data;
        Node* next;
    };
    Node* head = nullptr;
public:
    void insert(T value) {
        Node* newNode = new Node{value, head};
        head = newNode;
    }
    void remove() {
        if (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    LinkedList<int> list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();   
    list.remove();    
    list.display();   
    return 0;
}
