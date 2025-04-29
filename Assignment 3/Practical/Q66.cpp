//Q66.Write a class Matrix  with a parameterized constructor to initialize a 2D array.
#include<iostream>
#include<string>
using namespace std;
class Matrix{
    private:
    int data[3][3];
    public:
    Matrix(int value){
        for(int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                data[i][j]=value;
            }
        }
    }
    void Display(){
        cout<<"matrix;"<<endl;
        for(int i=0; i<3;i++){
            for(int j=0;j<3;j++){
                cout<<data[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Matrix mat(7);
    mat.Display();
    return 0;
}
