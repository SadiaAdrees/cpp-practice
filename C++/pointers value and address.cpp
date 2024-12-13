/*Q2 Write a program that asks the user to enter integers as inputs to be stored in the variables 'a‘,’b’ and ‘c'
 respectively. There are also three integer pointers named ptrA , ptrB and ptrC. Assign the values of 'a'  'b‘ 
 and ’c’ to ptrA ,ptrB and ptrC respectively, and display them.
*/
#include<iostream>
using namespace std;
int main(){
	int a,b,c, &ptrA=a , &ptrB=b ,&ptrC=c;
	cout<<"Enter the value of 'a' = ";
	cin>>a;
	cout<<"Enter the value of 'b' = ";
	cin>>b;
	cout<<"Enter the value of 'c' = ";
	cin>>c;
	cout<<"The value of pointer ptrA is : "<<ptrA<<endl;
	cout<<"The value of pointer ptrB is : "<<ptrB<<endl;
	cout<<"The value of pointer ptrC is : "<<ptrC<<endl;
	
	return 0;
}
