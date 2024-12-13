//Write a program to calculate average of 10 numbers
#include <iostream>
using namespace std;
int main(){
int i,n,total,average;
for(i=1; i<=10; i++){
	cout<< "Enter the number : ";
	cin>> n;
	total += n;
}
 average= total/10;	
 cout<< "Average of  10 natural numbers are "<< average;	
return 0;	
}
