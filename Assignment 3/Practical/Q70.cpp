//Q70.Overload the "+"operator for a class complex to add two complex numbers.
#include<iostream>
#include<string>
using namespace std;
class complex{
    private:
    float real;
    float imag;
    public:

complex(){
    real=0.0;
    imag=0.0;
}

    complex(float r,float i){
        real=r;
        imag=i;
    }
     complex operator+(const complex &obj){
        complex result;
        result.real=real+obj.real;
        result.imag=imag+obj.imag;
        return result;
     }
     void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
     }
};
int main(){
    complex c1(3.5,2.5);
    complex c2(1.5,4.5);
    complex c3;
    c3=c1+c2;
    cout<<"sum of complex number :";
    c3.display();
    return 0;
}



