//Write	a	program	to	calculate	the	factorial	of	an  integer.
#include <iostream>
using namespace std;
int main(){

	int i,number; 
	int fact=1;   
    cout<<"Enter any Positive integer: ";    
    cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout<<"Factorial of " <<number <<" = "<<fact ;
}
