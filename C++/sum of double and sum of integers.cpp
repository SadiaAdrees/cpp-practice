/* Q1. Write a single sum function that returns the sum of two integers. 
Also write the equivalent function for taking the sum of two doubles. */
#include<iostream>
using namespace std;
int sumi(int a , int b){
	cout<<" The sum of 2 integers are: ";
	return (a+b);
}
double sumd (double a ,double b){
	cout<<" The sum of 2 double are: ";
	return (a+b);
}
int main(){
	int a ,b;
	double x,z;
	cout<<" Enter 1st integer value : ";
	cin>> a;
	cout<<" Enter 2nd integer value : ";
	cin>>b;
	cout<<" Enter 1st double value : ";
	cin>> x;
	cout<<" Enter 2nd double value : ";
	cin>>z;
	cout<<sumi( a , b)<<endl;
	cout<<sumd( x , z)<<endl;

	return 0;
}
