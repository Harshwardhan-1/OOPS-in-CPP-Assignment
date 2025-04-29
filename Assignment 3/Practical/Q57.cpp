//Q57.Write a program that creates an array of car objects and display their details.
#include<iostream>
#include<string>
using namespace std;
class Car{
  public:
  string make;
  string model;
  int year;
  Car(string m,string mod,int y){
    make=m;
    model=mod;
    year=y;
  }
  void displayDetails(){
    cout<<"make:"<<make<<endl;
    cout<<"model:"<<model<<endl;
    cout<<"year:"<<year<<endl;
  }
};
int main(){
  int size=2;
  Car cars[]={
Car("honda","civic",2003),
Car("indore","ujjain",1790)



  };
  for(int i=0;i<size;i++){
  cars[i].displayDetails();
  }
  return 0;
}
