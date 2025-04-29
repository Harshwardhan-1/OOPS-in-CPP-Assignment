//Q74.Implement a class box with a friend function to calculate the volume of box.
#include<iostream>
#include<string>
using namespace std;
class Box{
    private:
    int length,width,height;
    public:
    Box(int l,int b,int h){
        length=l;
    width=b;
        height=h;
    }
    friend int totalVolume(Box b1,Box b2);
};
int totalVolume(Box b1,Box b2){
    int v1=b1.length*b1.width*b1.height;
    int v2=b2.length*b2.width*b2.height;
    
    return v1+v2;
}
int main(){
    Box b1(2,4,6);
    Box b2(3,6,9);
    int result =totalVolume(b1,b2);
  cout<<"total volume"<<result<<endl;

    return 0;
}

