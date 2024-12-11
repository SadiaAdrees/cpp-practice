// pointers
#include <iostream >
#include <string>
using namespace std;
void swap (int *x , int *y){
	cout<<endl<<"x ="<<x<<endl;
	cout<<endl<<"y ="<<y<<endl;
	int *temp = x;
	cout<<endl<<"temp ="<<temp<<endl;
	x = y;
	cout<<endl<<"x ="<<x<<endl;
	cout<<endl<<"*x ="<<*x<<endl;
	y = temp;
	cout<<endl<<"y ="<<y<<endl;
}
int main(){
	string a = "hello";
	string* a_ptr = &a;
	cout<<"&a =" <<&a<<endl;
	cout<<"a_ptr =" <<a_ptr<<endl;  // address of a 
	cout<<"*a_ptr =" <<*a_ptr<<endl; // value store in a 
	cout<<" &a_ptr =" <<&a_ptr<<endl; // address of that pointer 
	
	
	 //  modification
	  string food = "Pizza";
	  string* ptr = &food;
	
	  // Output the value of food
	  cout << food << "\n";
	
	  // Output the memory address of food
	  cout << &food << "\n";
	
	  // Access the memory address of food and output its value
	  cout << *ptr << "\n";
	  
	  // Change the value of the pointer
	  *ptr = "Hamburger";
	  
	  // Output the new value of the pointer
	  cout << *ptr << "\n";
	  
	  // Output the new value of the food variable
	  cout << food << "\n";
	  
	  
	  
	  
	  // swap value 
	  int x =  10;
	  int y = 20 ;
	  cout<<"Before Swap"<<endl<<"x = " <<x<<endl<<"y = "<<y<<endl;
	  swap(&x,&y);
	  cout<<"After Swap"<<endl<<"x = " <<x<<endl<<"y = "<<y<<endl;
	  
	  return 0;
	}
