/*5.	Write a program to enter the numbers till the user wants 
and at the end it should display the count of positive, negative and zeros entered*/
 #include<iostream>
using namespace std;
int main(){
	char ch;
	int a , pn=0, nn=0,zn=0;
	cout<< " For termination enter Small n."<< endl;
	cout<< " If YOU WANT TO ENTER THE NUMBER than press y: ";
	cin>> ch;
  while (ch !='n' ) {
	cout<< " Enter Number :";
	cin>> a;
		
		if ( a>0){
			pn++;
		}else if ( a<0){
			nn++;
	   }else if ( a==0){
			zn++;
	}
	
cout<< " If YOU WANT TO ENTER THE NUMBER than press y: ";
cin>> ch; 	
}
cout<< " The counts of positive Numbers: " << pn<<endl;
cout<< " The counts of negative Numbers: " << nn<<endl;
cout<< " The counts of zeros    Numbers: " << zn<<endl;
return 0;
}
