#include<iostream>
inline int cube(int n){
	return(n*n*n);
}
int main(){
	int n ;
	std::cout<<"Enter the Number : ";
	std::cin>>n;
	std::cout<<cube(n);
	return 0;
}