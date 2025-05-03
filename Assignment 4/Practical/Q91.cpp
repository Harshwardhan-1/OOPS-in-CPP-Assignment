//Q91.Create a program that uses a function template to perform generic matrix operations (addition, multiplication).
#include <iostream>
using namespace std;
template <typename T>
void addMatrices(T mat1[2][2], T mat2[2][2], T result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
template <typename T>
void multiplyMatrices(T mat1[2][2], T mat2[2][2], T result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
template <typename T>
void displayMatrix(T mat[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2], product[2][2];
    addMatrices(mat1, mat2, sum);
    cout << "Matrix Addition Result:" << endl;
    displayMatrix(sum);
    multiplyMatrices(mat1, mat2, product);
    cout << "Matrix Multiplication Result:" << endl;
    displayMatrix(product);
    return 0;
}
