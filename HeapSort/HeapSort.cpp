#include "HeapSort.h"
#include <iostream>
using namespace std;

// Heapify function to maintain the max-heap property
void HeapSort::Heapify(int A[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // If left child is larger than root
    if (left < n && A[left] > A[largest])
        largest = left;

    // If right child is larger than the largest so far
    if (right < n && A[right] > A[largest])
        largest = right;

    // If largest is not root, swap and continue Heapify
    if (largest != i) {
        swap(A[i], A[largest]);
        Heapify(A, n, largest);  // Recursively Heapify the affected subtree
    }
}

// HeapSort function to sort an array using HeapSort
void HeapSort::HeapSortAlgorithm(int A[], int n) {
    // Build a max-heap by calling Heapify on all non-leaf nodes
    for (int i = n / 2 - 1; i >= 0; i--) {
        Heapify(A, n, i);
    }

    // Extract elements one by one from the heap
    for (int i = n - 1; i >= 1; i--) {
        // Move current root to the end
        swap(A[0], A[i]);

        // Call Heapify on the reduced heap
        Heapify(A, i, 0);
    }
}

// Function to print the array
void HeapSort::PrintArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}
