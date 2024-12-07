#include "kruskal.h"

// Constructor to initialize the number of vertices
Kruskal::Kruskal(int V) {
    this->V = V;
}

// Function to add an edge to the graph
void Kruskal::addEdge(int u, int v, int weight) {
    edges.push_back({u, v, weight});
}

// Find function for the Union-Find data structure
int Kruskal::find(int parent[], int i) {
    if (parent[i] == i)
        return i;
    return parent[i] = find(parent, parent[i]);  // Path compression
}

// Union function for the Union-Find data structure
void Kruskal::unionSet(int parent[], int rank[], int x, int y) {
    int rootX = find(parent, x);
    int rootY = find(parent, y);

    if (rootX != rootY) {
        // Union by rank
        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
}

// Function to perform Kruskal's algorithm to find MST
void Kruskal::kruskalMST() {
    // Sort all edges in ascending order by weight
    std::sort(edges.begin(), edges.end());

    // Create a parent and rank array for Union-Find
    int *parent = new int[V];
    int *rank = new int[V];

    // Initialize parent and rank arrays
    for (int i = 0; i < V; i++) {
        parent[i] = i;
        rank[i] = 0;
    }

    std::vector<Edge> mst;

    // Process each edge in sorted order
    for (const auto &e : edges) {
        int u = e.u;
        int v = e.v;
        int weight = e.weight;

        // If u and v are not connected, add the edge to MST
        if (find(parent, u) != find(parent, v)) {
            mst.push_back(e);
            unionSet(parent, rank, u, v);
        }
    }

    // Output the MST
    std::cout << "Edges in the MST:\n";
    for (const auto &e : mst) {
        std::cout << e.u << " - " << e.v << " : " << e.weight << std::endl;
    }

    // Clean up
    delete[] parent;
    delete[] rank;
}
