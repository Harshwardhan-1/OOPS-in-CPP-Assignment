//Q76.write a class distance  with a friend function  to add two distance.
#include<iostream>
#include<string>
using namespace std;
class Distance{
    public:
    int feet;
    int inches;
    Distance(int f,int i){
        feet=f;
        inches=i;
    }
    friend   Distance add(Distance d1,Distance d2);
void show(){
    cout<<"feet:"<<feet<<endl;
    cout<<"inches:"<<inches<<endl;
}

};
Distance add(Distance d1,Distance d2){
    int f=d1.feet+d2.feet;
    int i=d1.inches+d2.inches;

    if (i>=12){
        f=i/12;
        i=i%12;
        return Distance(f,i);
    }
}
int main(){
    Distance d1(5,8);
    Distance d2(3,11);
    Distance d3=add(d1,d2);
    cout<<"total distance:";
    d3.show();
    return 0;
}

