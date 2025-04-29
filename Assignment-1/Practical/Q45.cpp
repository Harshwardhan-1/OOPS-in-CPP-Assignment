//Q45 Write a c++ program to print the numbers from 1 to 100,but replace multiple of 3 with"fizz" and multiple of 5 with "buzz" using a for loop.
#include<iostream>
using namespace std;
int main(){
	 for(int i = 1 ; i <= 100 ; i++){
        if(i % 3 == 0 && i%5 == 0){
            cout<<"Fizz Buzz"<<endl;
        }else if(i %5 == 0){
            cout<<"Buzz"<<endl;
        }else if (i%3 == 0){
            cout<<"Fizz"<<endl;
        }else{
            cout<<i<<endl;
        }
    }
	return 0;
}