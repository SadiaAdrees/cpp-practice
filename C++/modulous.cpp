#include <iostream>
using namespace std;
int main (){
	int num,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14;
	cout<< "Enter seven digits \n";
	cin>> num;
	n1= num/ 1000000;
	n2= num % 1000000;
	
	n3= n2/ 100000;
	n4= n2% 100000;
	
	n5= n4/ 10000;
	n6= n4 % 10000;
	
	n7= n6/ 1000;
	n8= n6% 1000;
	
	n9= n8/ 100;
	n10= n8% 100;
	
	n11= n10/ 10;
	n12= n10% 10;
	
	n13= n12/ 1;
	
	cout<<  n1 <<"\t" <<n3 <<"\t" << n5 <<"\t" <<n7 <<"\t" <<n9 <<"\t" <<n11 <<"\t" <<n13   ;
	
	
}
