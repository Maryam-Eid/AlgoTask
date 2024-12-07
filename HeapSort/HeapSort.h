#ifndef HEAPSORT_H
#define HEAPSORT_H

class HeapSort {
public:
    // Heapify function to maintain the max-heap property
    void Heapify(int A[], int n, int i);

    // HeapSort function to sort an array using HeapSort
    void HeapSortAlgorithm(int A[], int n);

    // Function to print the array
    static void PrintArray(int A[], int n);
};

#endif
