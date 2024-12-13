/* Q2. Write a function named "reverse" that takes as its arguments the following:
an array of floating point values;
The function must reverse the order of the values in the array. Thus, for example, if the array that's passed to the function 
looks like this:
 5.8 | 2.6 | 9.0 | 3.4 | 7.1 then when the function returns, the array will have been modified so that it looks like this: 
7.1 | 3.4 | 9.0 | 2.6 | 5.8 The function should not return any value. */
#include<iostream>
using namespace std;
void inverse(int a){
	float arr[a];
	cout<< "Enter array value:"<<endl;
	for (int i=0; i<a;i++){
		cout<<"Enter Array["<<i<<"]= ";
		cin>> arr[i];
	} cout<<endl;
	cout<< "Your array is as follow:"<<endl;
	for (int i=0; i<a;i++){
		cout<<arr[i]<<" | ";
	} cout<<endl;
	cout<< "The reverse of your array is as follow:"<<endl;
	for (int i=a-1; i>=0;i--){
		cout<<arr[i]<<" | ";
	} 
}

int main(){
	int a;
	cout<< "Enter the size of the Array: ";
	cin>>a;
	inverse(a);
	
	return 0;
}
