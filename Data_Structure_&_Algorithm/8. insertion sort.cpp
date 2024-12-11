#include<iostream>
using namespace std;
int main(){
	int arr[5]={65,2,12,22,11};
	int key=0;
	int j=0;
	
	cout<<"Unsorted array is: { ";
	for (int i = 0 ; i < 5 ; i++){
		cout<< arr[i];
		if(i!=4){
			cout<<" , ";
		}else{
			cout<<" } " <<endl<<endl;
		}
	}
	
//	 Insertion sort
	for (int i = 1 ; i < 5 ; i++){
		key = arr[i];
		j=i-1;
		while (j>=0 && arr[j]>key){
			arr[j+1]= arr[j];
			j=j-1;
		}
		
		arr[j+1]= key;
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
