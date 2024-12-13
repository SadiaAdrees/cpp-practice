#include <iostream>
using namespace std;
int main(){

cout<<" Please choose your options: \n 1 = Addition \n 2 = Subtraction \n 3 = Multiplication \n 4 = Division \n 5 = Square \n 6 = Exist \n ";
int num ;
cin>> num;

switch (num){
  	case 1:
  		int a ,b , sum;
  	   cout<<" For Addition: \n" ;
	   cout<<" Enter two numbers" ;
	   cin>> a ;
	   cin>> b ;
	   sum= a+b;
	   cout<< " Sum = " <<sum;
  	break;
  	case 2:
  	  	int c,d , sub;
  	   cout<<" For Subtraction: \n" ;
	   cout<<" Enter two numbers" ;
	   cin>> c;
	   cin>> d;
	   sub= c-d;
	   cout<< " Sub = " <<sub;
  	break;
  	case 3: 
	    int e ,f , multiplication;
  	   cout<<" For  Multiplication: \n" ;
	   cout<<" Enter two numbers" ;
	   cin>> e;
	   cin>> f;
	   multiplication= e*f;
	   cout<< " Multiplication =" << multiplication;
  	break;
  	case 4:
  		int g,h,division;
  		cout<< "For Division ";
	    cout<<" Enter two numbers" ; 
		cin>> g;
		cin>> h;
		division=g/h;
		cout<< "Division = " <<division;
  	break;
  	case 5:
  		int i ,square;
  		cout<< "For Square" ;
  		cout<< " Enter a Number";
  		cin >> i;
  		square= i*i;
  		cout<< "Square = " <<square;	
  	break;
  	case 6: exit(0);
  	break;	
	
	
	
}	
	
return (0);	
	
}
