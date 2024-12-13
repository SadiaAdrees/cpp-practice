//Write a program that inputs characters[A...to Z ] in array and passes array to a function.
// The function counts total characters and show Vowels in array and returns result of total 
//characters to main function and display it.
#include<iostream>
using namespace std;
int character(int size){
	char arr[size], a;
	for (int i=0; i<size;i++){
		cout<<"Enter index ["<<i<<"] character: ";
		cin>>arr[i];   
	}
	cout<<" The Vowels are: ";
	for (int i=0; i<size;i++){
		if(arr[i]=='A'||arr[i]=='a'||arr[i]=='E'||arr[i]=='e'|| arr[i]=='I'||arr[i]=='i'||arr[i]=='O'||arr[i]=='o'||arr[i]=='U'||arr[i]=='u'){
		 cout<<arr[i]<<" , ";
		}
	}
	cout<<endl<<"The num of characters in this array are : ";
	return size;
}
int main(){
	int size;
	cout<<"Enter how many character you want to enter: ";
	cin>>size;
	cout<<character(size);
	return 0;
}
