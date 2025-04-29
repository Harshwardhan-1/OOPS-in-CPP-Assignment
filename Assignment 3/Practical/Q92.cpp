//Q92.Create a class SparseMatrix with member function for matrix addition and multiplication.
#include <iostream>
#include<string>
using namespace std;
const int SIZE = 3; 
class SparseMatrix {
private:
    int mat[SIZE][SIZE];
public:
    SparseMatrix() {
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                mat[i][j] = 0;
    }
    void input() {
        cout << "Enter elements (0 for empty):\n";
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                cin >> mat[i][j];
    }
    void display() {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
        SparseMatrix add(SparseMatrix& other) {
        SparseMatrix result;
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
        return result;
    }
    SparseMatrix multiply(SparseMatrix& other) {
        SparseMatrix result;
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                for (int k = 0; k < SIZE; k++)
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
        return result;
    }
};
int main() {
    SparseMatrix A, B;
    cout << "Enter Matrix A:\n";
    A.input();
    cout << "Enter Matrix B:\n";
    B.input();
    cout << "\nMatrix A:\n";
    A.display();
    cout << "\nMatrix B:\n";
    B.display();
    SparseMatrix sum = A.add(B);
    cout << "\nA + B:\n";
    sum.display();
    SparseMatrix product = A.multiply(B);
    cout << "\nA * B:\n";
    product.display();
    return 0;
}
