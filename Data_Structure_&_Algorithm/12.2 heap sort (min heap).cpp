#include<iostream>
using namespace std;

void heapify(int A[], int n, int i) {
    int parent = i; // root node
    int leftchild = (2 * i) + 1;
    int rightchild = (2 * i) + 2;

    // Find the smallest among root, left child, and right child
    if ((leftchild < n) && (A[leftchild] < A[parent])) {
        parent = leftchild;
    }
    if ((rightchild < n) && (A[rightchild] < A[parent])) {
        parent = rightchild;
    }

    // If the smallest is not the root, swap and continue heapifying
    if (parent != i) {
        swap(A[i], A[parent]);
        heapify(A, n, parent);
    }
}

void HeapSort(int A[], int n) {
    // Build Min-Heap
    for (int i = (n / 2) - 1; i >= 0; i--) {
        heapify(A, n, i);
    }

    // One by one extract elements from the heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to the end
        swap(A[0], A[i]);

        // Call heapify on the reduced heap
        heapify(A, i, 0);
    }
}

int main() {
    int arr[8] = {8, 7, 23, 32, 5, 62, 14, 18};
    HeapSort(arr, 8);
    for (int p = 0; p < 8; p++) {
        cout << arr[p] << ",";
    }
    return 0;
}

