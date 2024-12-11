#include<iostream>
using namespace std;
void LinearSearch(int a[] , int n){
	int temp = -1;
	for(int i = 0 ; i<5 ; i++){
		if(a[i]==n){
			cout<<"Element found in location : "<<i<<endl;
			temp = 0;
		}
	}
	if (temp==-1){
		cout<<"Element not found. "<<endl;	
	}
	
}
int main (){
	int arr[5]= {1,2,45,3,28};
	int num;
	cout<<"Enter the Number you want to search: ";
	cin>>num;
	LinearSearch(arr,num);
	return 0;
	
}
