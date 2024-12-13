//2.Write while loops to do the following:
//  Repeatedly print the value of the variable xValue, decreasing it by 0.5 each time, as long as xValue remains positive.
#include<iostream> 
using namespace std;
 int main(){
 	float i=0 ,n;
 	cout<<" Enter a Positive Starting number: ";
 	cin>> n;
 	while(n>=i){
 		cout<< n<< endl;
 		n=n-.5;
	 }
 return 0;
 }
