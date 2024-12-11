#include<iostream>
using namespace std;
int main(){
	int arr[5]={65,25,12,22,11};
	int min=0;
	
	cout<<"Unsorted array is: { ";
	for (int i = 0 ; i < 5 ; i++){
		cout<< arr[i];
		if(i!=4){
			cout<<" , ";
		}else{
			cout<<" } " <<endl<<endl;
		}
	}
	
//	 Selection sort
	for (int i = 0 ; i < 5 ; i++){
		min = i;
		for (int j = i+1 ;j<5 ; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		if (min!= i){
//			swap(arr[min] , arr[i]);
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i]= temp;
		}
	}
	
	cout<<"Sorted array is: { ";
	for (int i = 0 ; i < 5 ; i++){
		cout<< arr[i];
		if(i!=4){
			cout<<" , ";
		}else{
			cout<<" } " ;
		}
	}
	return 0; 
}
