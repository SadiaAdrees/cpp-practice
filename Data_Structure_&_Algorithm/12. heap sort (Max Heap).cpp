/*
Overview:
Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure.
The algorithm works in two main phases:
Building a Max-Heap from the unsorted array.
Extracting the maximum element (root of the heap) and placing it at the end of the array, then rebuilding the heap with the remaining elements.
Key Functions:
heapify(A[], n, i):

This function ensures that the subtree rooted at index i satisfies the heap property (specifically, the Max-Heap property).
The function checks if the left and right children of the root are larger than the root itself. If so, it swaps the root with the largest child and recursively calls heapify on the affected subtree.
HeapSort(A[], n):

This function performs the actual sorting. It first builds a Max-Heap from the input array, then iteratively extracts the maximum element (root of the heap) and moves it to the end of the array.
After each extraction, it reduces the size of the heap by 1 and calls heapify to restore the Max-Heap property in the remaining heap.
*/
#include<iostream>
using namespace std;
void heapify (int A[], int n, int i){
	int parent = i ; // root node
	int leftchild =  (2 * i )+ 1;
	int rightchild = ( 2 *i )+  2;
	if((leftchild < n) && ( A[leftchild ] > A[parent])){
		parent = leftchild;
	}
	if((rightchild <n) && ( A[rightchild]>A[parent])){
		parent = rightchild;
	}
	if (parent!=i ){
		swap(A[ i ], A[parent]);
		heapify( A,n,parent	);
	}
		
		
}

void HeapSort (int A[], int n){
//Build Heap
	for( int i =(n/2)-1 ; i>=0 ;i--){
		heapify (A,n,i);
	}
	for( int i =n-1 ; i>=0 ;i--){
		swap(A[ 0 ], A[i]);
		heapify (A,i,0);
	}
}
int main(){
	int arr[8]= {8, 7, 23, 32, 5, 62, 14, 18};
	HeapSort(arr,8);
	for (int p= 0;p<8;p++){
		cout<<arr[p]<<",";
	}
	return 0; 
}
