//Q72.overload the "==" operator for a class date to comparte two dates.
#include<iostream>
#include<string>
using namespace std;
class Date{
    public:
    int day,month,year;

    Date(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }
    int operator==(Date &other){
        if(day==other.day &&month==other.month&&year==other.year){
            return 1;
        }
        else return 0;
    }
};
int main(){
    Date d1(1,2,3);
    Date d2(1,2,3);
    Date d3(1,3,5);
    if (d1==d2){
        cout<<"d1 and d2 are equal:"<<endl;
    }
    else
    cout<<"d1 and d2 are not equal:"<<endl;
    if (d1==d3){
        cout<<"d1 and d3 are equal:"<<endl;
    }
    else
    cout<<"d1 and d3 are not equal:"<<endl;
    return 0;
}