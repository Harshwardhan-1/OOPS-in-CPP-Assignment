//Q56.Design a  class car with attributes for make,model,and year.Include methods to display car details.
#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    string make;
    string model;
    int year;

    Car(string mk,string mdl,int yr){
        make=mk;
        model=mdl;
        year=yr;
    }
     void displayDetails(){
        
        cout<<"model:"<<model<<endl;
        cout<<"Make:"<<make<<endl;
        cout<<"Year:"<<year<<endl;
     }

};
int main(){
    Car c1("Germany","BMW",1998);
    c1.displayDetails();
    return 0;

} 
