//calculator:
#include<iostream>
using namespace std;
void sum(){
	int  a,b;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	int sum;
	sum=a+b;
	cout<<"The Addition of Two numbers are : "<<sum;
}
void sub(){
	int  a,b;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	int sub;
	sub=a-b;
	cout<<"The Subtraction of Two numbers are : "<<sub;
}
void divide(){
	float a, b;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	float divide;
	divide=a/b;
	cout<<"The Division of Two numbers are : "<<divide;
}
void mul(){
	int  a,b;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	int mul;
	mul=a*b;
	cout<<"The Multiplication of Two numbers are : "<<mul;
}int square(){
	int  a,b;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	int square1,square2;
	square1=a*a;
	square2=b*b;
	cout<<"The Square  of 1st number is : "<<square1<<endl;
	cout<<"The Square  of 2nd number is : "<<square2;
	return 0;
}



int main(){
	int choice ;
	cout<<"****Enter Your choice****"<<endl<<"Press 1: Addition"<<endl<<"Press 2: Subtraction"<<endl<<"Press 3: Division"<<endl<<"Press 4: Multiplication"<<endl<<"Press 5: Square "<<endl;
	cin>>choice;
	switch(choice){
		case 1:{
			sum();
		} break;
		case 2:{
			sub();
		}break;
		case 3:{
			divide();
		} break;
		case 4:{
			mul();
		}break;
		case 5:{
			square();
		} break;
		default :
			cout<<"Wrong Input";
	}
	return 0;
}
