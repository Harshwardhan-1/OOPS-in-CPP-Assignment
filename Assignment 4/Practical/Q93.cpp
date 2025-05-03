//Q93.Implement a program that uses class templates to create a generic binary tree data structure.
#include <iostream>
using namespace std;
template <typename T>
class Node {
public:
    T data;  // Data of any type
    Node* left;
    Node* right;
    Node(T value) : data(value), left(nullptr), right(nullptr) {}
};
template <typename T>
class BinaryTree {
public:
    Node<T>* root;
    BinaryTree() : root(nullptr) {}
    void insert(T value) {
        root = insert(root, value);
    }
    void inorder() {
        inorder(root);
        cout << endl;
    }
private:
    Node<T>* insert(Node<T>* node, T value) {
        if (node == nullptr)
            return new Node<T>(value);
        if (value < node->data)
            node->left = insert(node->left, value);
        else
            node->right = insert(node->right, value);
        return node;
    }
    void inorder(Node<T>* node) {
        if (node != nullptr) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }
};
int main() {
    BinaryTree<int> tree;  // Create a Binary Tree for integers
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);
    cout << "In-order traversal of the tree: ";
    tree.inorder();
    return 0;
}
