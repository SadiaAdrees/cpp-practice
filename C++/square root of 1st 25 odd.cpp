//3. Print the square roots of the first 25 odd positive integers
#include<iostream>
#include <math.h> 
using namespace std;
 int main(){
 	int i=0;
	float squareroot=0;
 	while (i<=25){
 	if(i%2!=0){
 		squareroot= pow(i,0.5);
 		cout<<"Square Root of "<< i <<" is "<< squareroot<< endl;
		 }	
 	i++;	
	 }	
 	return 0;
 }
