## **Kruskal's Algorithm**

Kruskal's Algorithm is used to find the minimum spanning tree (MST) of a graph. It works by sorting the edges in increasing order of weight and adding edges to the MST, ensuring no cycles are formed.

### **Pseudocode**

```plaintext
Kruskal's Algorithm(G)
    Initialize the MST as an empty set
    Sort all edges in G by weight

    Initialize a Union-Find data structure for all vertices

    for each edge (u, v) in sorted edges:
        if u and v are in different sets (i.e., no cycle):
            Add (u, v) to MST
            Union the sets containing u and v

    Return the MST
```
## Algorithm Analysis

### Time Complexity

1. **Sorting the Edges**:  
   The first step of Kruskal’s algorithm is sorting the edges by weight. Sorting the edges takes O(E log E), where E is the number of edges.

    - **Time Complexity of Sorting the Edges**: O(E log E)


2. **Union-Find Operations**:  
   The next step involves checking each edge and performing union-find operations. The union and find operations, implemented with path compression and union by rank, take O(α(V)) time, where V is the number of vertices and α(V) is the inverse Ackermann function, which grows very slowly and can be considered nearly constant for practical purposes.

    - **Time Complexity of Union-Find Operations**: O(α(V))

Therefore, the overall time complexity for Kruskal’s algorithm is dominated by the sorting step, giving a final time complexity of O(E log E).

### Space Complexity

Kruskal's algorithm requires space for the edges, which is O(E), and for the union-find data structure, which is O(V) for V vertices. Thus, the total space complexity is O(E + V).

### Overall Complexity

- **Time Complexity**:
    - Worst-case: O(E log E)
    - Best-case: O(E log E)
    - Average-case: O(E log E)

- **Space Complexity**: O(E + V)
