//Q1.Write a Program to read five numbers using array, Find their sum, Product, Subtraction, average and print the numbers in reverse order
#include<iostream>
using namespace std;
int main(){
	int i=0,num=0 ,sub=0,product=1;
    float average , sum=0;
	int arr[5];
	while (i<5){
	cout<<"Enter Data of "<<i<< " index: ";
	cin>> num;
	arr[i]=num;
	sum=sum+ arr[i];
	sub=arr[i]-sub;
	product=product* arr[i];
	i++;
	}//i=5
	
	cout<< "The sum of the array is: "<<sum <<endl; 
	cout<< "The product of the array is: "<<product <<endl; 
	cout<< "The sub of the array is: "<<sub <<endl; 
	average = sum/5;
	cout<< "The average of the array is: "<<average<<endl;
	cout<<"*****The Array in reverse order***** "<< endl;
	
	i=5-1;
	while (i>=0){
	cout<<"arr[" <<i<< "] = "<<arr[i]<< endl;
	i--;
	}
	return 0;
}

