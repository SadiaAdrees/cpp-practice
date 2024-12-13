#include <iostream>
using namespace std;
int main(){
	int x=1,y=1,z=1,a=0;
	cout<<"Write a number till which you want the Fibinacci Series: ";
	cin>>a;
	cout<<"Fibonacci Series Till "<<a<<" : "<<x<<" , "<<y;
	for (z=1;z<=a;z++){
	z=x+y;
	cout<<" , "<<z;
	y=x;
	x=z;	
	}
	return 0;
	
}
