#include <iostream>
#include "HeapSort/HeapSort.h"
#include "Kruskal's/kruskal.h"

using namespace std;

int main() {
    cout << "==================== HeapSort Algorithm ====================" << endl;

    HeapSort hs;
    int A[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Unsorted array: ";
    hs.PrintArray(A, n);

    hs.HeapSortAlgorithm(A, n);

    cout << "Sorted array: ";
    hs.PrintArray(A, n);

    cout << "==================== Kruskal's Algorithm ====================" << endl;

    // Create a graph with 4 vertices
    Kruskal graph(4);

    // Add edges to the graph (u, v, weight)
    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 6);
    graph.addEdge(0, 3, 5);
    graph.addEdge(1, 3, 15);
    graph.addEdge(2, 3, 4);

    graph.kruskalMST();

    return 0;
}
