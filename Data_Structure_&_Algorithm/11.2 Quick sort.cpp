//start index as a pivot 
#include<iostream>
using namespace std;
int Partition(int arr[],int s,int e){
	int pivot = arr[s]; 
	int pIndex = s+1; 
	for (int i = s+1 ; i<=e ;i++){ 
		if(arr[i] <= pivot){ 
			swap(arr[i],arr[pIndex]);
			pIndex++;
		}
	}
	swap(arr[s],arr[pIndex-1]);
	return pIndex-1;
}
	

void QuickSort(int arr[], int s,int e){
	if(s<e){
		int p = Partition(arr, s,e);
		cout<<"p = "<<p<<endl; 
		QuickSort(arr,s,p-1);
		QuickSort(arr,p+1,e);	
	}
}
int main(){
	int arr[8]= {8, 7, 23, 32, 5, 62, 14, 18};
	QuickSort(arr,0,7);
	for (int p= 0;p<8;p++){
		cout<<arr[p]<<",";
	}
	
	
}
