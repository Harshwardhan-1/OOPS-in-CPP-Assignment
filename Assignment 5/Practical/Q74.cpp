//Q74.Write a program to rename and delete files using the rename and remove functions.
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    if(rename("oldfile.txt","new file.txt")==0){
        cout<<"file renamed successfully:"<<endl;
    }
    else{
        cout<<"error in renaming:"<<endl;
    }
    if(remove("newfile.txt")==0){
        cout<<"file remove successfully:"<<endl;
    }
    else{

        cout<<"error deleting file:"<<endl;
    }
    return 0;
}
