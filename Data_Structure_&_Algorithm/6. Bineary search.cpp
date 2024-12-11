#include<iostream>
using namespace std;
void BinarySearch(int arr[] , int n){
	int left = 0;
	int right = 9;
	int mid =left+((right-left)/2);
	while (left<=right){
		if(arr[mid]==n){
			cout<<"Element found at index: "<<mid<<endl;
			break;
		}else if(arr[mid]<n){
			left = mid+1;
		}else{
			right = mid -1;
		}
		mid =left+((right-left)/2);
	}
	
	
}
int main (){
	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
	int num;
	cout<<"Enter the Number you want to search: ";
	cin>>num;
	BinarySearch(arr,num);
	return 0;
	
}
