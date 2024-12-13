/*1.Write a Program in C++ that takes Integer values from user, and then find the largest number among 
all the Integers, and display the largest number on the screen. Use  DO-While loop to control the Input,
 Terminate the Program on entering zero. Find the Largest Integer Using If Statement*/
#include<iostream>
using namespace std;
int main(){
	int a ,  num=0;
	cout<< " For termination enter 0."<< endl;
	do{
		cout<< " Enter Number :";
		cin>> a;
		if ( a>=num){
			num=a;
		}
	}while (a!=0);
cout<< " The large Number  is : " << num;
return 0;
}
