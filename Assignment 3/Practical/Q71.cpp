//Q71. Implement the "<<"and">>" operators for a class Fraction to input and output fraction values.
#include<iostream>
#include<string>
using namespace std;
class Fraction{
    public:
    int num,den;
    Fraction(){
        num=0;
        den=1;
    }
   friend istream& operator >>(istream&in,Fraction &f){
    in>>f.num>>f.den;
    return in;
   }
   friend ostream& operator <<(ostream&out,Fraction &f){
    out<<f.num<<"/"<<f.den;
    return out;
   }
};
int main(){
    Fraction f;
    cout<<"enter num and den:"<<endl;
    cin>>f;
    cout<<"you entered:"<<f<<endl;

    return 0;
}