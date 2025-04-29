//Q85. Implement the class library with private,protected and public memebresand demonstrate their axccessiblity.
#include<iostream>
#include<string>
using namespace std;
class Library{
    private:
    string BookName;
    public:
    int BookID;
    Library(string BN,int B){
        BookName=BN;
        BookID=B;
    }
    void displayBookName(){
        cout<<"bookname:"<<BookName<<endl;
    }
    void displayID(){
        cout<<"id:"<<BookID<<endl;
    }
    protected:
    string libraryLocation;
    public:
    void setLibraryLocation(string location){
        libraryLocation=location;
    }
    void displayLibraryLocation(){
        cout<<"libraryLocation:"<<libraryLocation<<endl;
    }
};
int main(){
    Library lib("c++",101);
    lib.displayBookName();
    lib.displayID();
    lib.setLibraryLocation("city library");
    lib.displayLibraryLocation();
    return 0;
}