//Write a program to print first n natural numbers and  their sum.
#include <iostream>
using namespace std;
int main(){
int i,n,sum;
cout<< " Enter the number :";
cin>> n;
for(i=0; i<=n; i++){
	cout<<i <<endl;
	sum += i;
}	
 cout<< "sum of "<<n<<" natural numbers are "<< sum;	
return 0;	
}
