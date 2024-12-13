//Write a program to print largest even and largest odd  number from a list of numbers entered (min 10 numbers). 
#include <iostream>
using namespace std;
int main(){
int i,n,odd,even;
for(i=1; i<=10; i++){
	cout<< " Enter the number :";
    cin>> n;
    if (n%2==0){
    	if (n>even){
    		even=n;
		}
	}else if (n%2!=0){
		if (n>odd){
			odd=n;
		}
	}    
} 
    cout<<"\n Largest Even Number : "<<even;
    cout<<"\n Largest Odd Number : "<<odd;
return 0;	
}
