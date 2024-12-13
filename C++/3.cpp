/*	Output the following:((Nested for loop)
1
22
333
1111
22222
333333*/
#include<iostream>
using namespace std;
int main(){
	int n=1;
	int i,j;
	int m=6;
	for(i=1;i<=m;i++){
		 
	   for(j=1;j<=i;j++){
	   	
	   	cout<< n;}
	cout<< endl;
	   	n++;
	   	if (n>3){
	   		n=1;
		   }
	   } 	
	return 0;
}
