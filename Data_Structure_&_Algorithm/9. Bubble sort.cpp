#include<iostream>
using namespace std;
int main(){
	int arr[5]={65,2,12,22,11};
	cout<<"Unsorted array is: { ";
	for (int i = 0 ; i < 5 ; i++){
		cout<< arr[i];
		if(i!=4){
			cout<<" , ";
		}else{
			cout<<" } " <<endl<<endl;
		}
	}
	
//	 Bubble sort
	for (int i = 0 ; i < 5 ; i++){
		for (int j = 0; j< 4 ; j++){
			if (arr[j]>arr[j+1]){
				swap(arr[j+1] , arr[j]);
				cout<<"Chnage" <<endl<<endl;
			}
				cout<<"array is: { ";
				for (int i = 0 ; i < 5 ; i++){
					cout<< arr[i];
					if(i!=4){
						cout<<" , ";
					}else{
						cout<<" } " <<endl;
					}
				}
	}
	cout<<" round done."<<endl;
	
	}
	
	cout<<"Sorted array is: { ";
	for (int i = 0 ; i < 5 ; i++){
		cout<< arr[i];
		if(i!=4){
			cout<<" , ";
		}else{
			cout<<" } " <<endl;
		}
	}
	return 0; 
}
