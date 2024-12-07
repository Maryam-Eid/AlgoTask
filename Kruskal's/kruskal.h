#ifndef KRUSKAL_H
#define KRUSKAL_H

#include <vector>
#include <algorithm>
#include <iostream>

struct Edge {
    int u, v, weight;

    bool operator<(const Edge& e) const {
        return weight < e.weight;
    }
};

// Class to represent a graph
class Kruskal {
private:
    int V;  // Number of vertices
    std::vector<Edge> edges;  // List of edges

    // Helper function for the Union-Find data structure
    int find(int parent[], int i);

    // Union function for the Union-Find data structure
    void unionSet(int parent[], int rank[], int x, int y);

public:
    Kruskal(int V);  // Constructor to initialize graph with V vertices

    // Function to add an edge to the graph
    void addEdge(int u, int v, int weight);

    // Function to perform Kruskal's algorithm to find MST
    void kruskalMST();
};

#endif
