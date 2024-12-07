# HeapSort Algorithm


### **Heapify Algorithm Pseudocode**

Heapify ensures the max-heap property by comparing a node with its children and swapping it with the largest child if necessary, recursively applying itself to maintain the heap structure.

```plaintext
Heapify(A, n, i)
    largest = i
    left = 2 * i + 1
    right = 2 * i + 2

    if left < n and A[left] > A[largest]
        largest = left

    if right < n and A[right] > A[largest]
        largest = right

    if largest != i
        Swap A[i] with A[largest]
        Heapify(A, n, largest)
```

### **HeapSort Algorithm Pseudocode**

HeapSort builds a max-heap from the array, then repeatedly swaps the root (max element) with the last element, reduces the heap size, and restores the heap property using Heapify until the entire array is sorted.

```plaintext
Heapsort(A)
    n = length(A)

    // Step 1: Build a max heap
    for i = n / 2 - 1 downto 0
        Heapify(A, n, i)

    // Step 2: Extract elements one by one
    for i = n - 1 downto 1
        // Move current root to the end
        Swap A[0] with A[i]

        // Reduce heap size by 1
        Heapify(A, i, 0)  // Rebuild the heap with the new root
```

## Algorithm Analysis

### Time Complexity

1. **Building the Max Heap**:  
   The `Heapify` function is called for each non-leaf node starting from the last non-leaf node (`n / 2 - 1`). The time complexity of `Heapify` at each level is proportional to the height of the tree. Building the max heap takes O(n) time because each heapify call works in O(log n) time, but most of the calls happen on subtrees that are smaller.

    - **Time Complexity of Building the Max Heap**: O(n)

    
2. **Heapsort Process**:  
   After building the max heap, the algorithm extracts the maximum element (root) by swapping it with the last element and then reduces the heap size by 1. After each extraction, `Heapify` is called to restore the max-heap property, which takes O(log n) time.

    - The heap size reduces from `n` to `1`, and in each step, we perform a `Heapify` operation.
    - **Time Complexity of HeapSort**: O(n log n)

   Therefore, the overall time complexity for the HeapSort algorithm is O(n log n) in all cases (best, average, and worst).

### Space Complexity

HeapSort operates in-place and does not require additional storage beyond the input array. Therefore, its space complexity is O(1), as it only requires a constant amount of extra space for variables like `left`, `right`, and `largest`.

### Overall Complexity

- **Time Complexity**:
    - Worst-case: O(n log n)
    - Best-case: O(n log n)
    - Average-case: O(n log n)

- **Space Complexity**: O(1)

