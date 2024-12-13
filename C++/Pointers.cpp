/*Q3. Write a C++ program to find the max of an integral data set. 
The program will ask the user to input the number of data values .
The program prints on screen a pointer that points to the max value.*/
#include<iostream>
using namespace std;
int main(){
	int size,max=0, arr[size],*ptr=&max;
	cout<<"Enter how many number you want to Enter: ";
	cin>>size;
	for (int i=0;i<size;i++){
		cin>>arr[i];
		if(arr[i]>=max){
			max=arr[i];	}}
	cout<<"The max number is: "<<*ptr<<endl;
	cout<<"The address Of the Max number: "<<ptr;
return 0;
}
