# Sort

This program demonstrates different sorting algorithms by implementing the `sort.c` framework provided by CS50. The goal is to understand the mechanics of sorting and how various algorithms function, including their time complexity.

---

## Sorting Algorithms

The program implements multiple sorting algorithms. Each algorithm sorts an array of integers in ascending order. Below are the implemented algorithms:

### 1. **Selection Sort**
   - Finds the smallest element and swaps it with the first unsorted element.
   - Repeats the process for the remaining unsorted portion.
   - **Time Complexity:**
     - Best: \(O(n^2)\)
     - Worst: \(O(n^2)\)

### 2. **Bubble Sort**
   - Compares adjacent elements and swaps them if they are in the wrong order.
   - Repeats the process until the array is sorted.
   - **Time Complexity:**
     - Best: \(O(n)\) (already sorted)
     - Worst: \(O(n^2)\)

### 3. **Insertion Sort**
   - Builds the sorted array one element at a time by inserting each new element into its correct position.
   - **Time Complexity:**
     - Best: \(O(n)\) (already sorted)
     - Worst: \(O(n^2)\)

### 4. **Merge Sort** (optional in the problem set)
   - Divides the array into halves, sorts each half, and merges them.
   - **Time Complexity:**
     - Best: \(O(n \log n)\)
     - Worst: \(O(n \log n)\)

---

## How It Works

1. **Framework Setup:**
   - CS50 provides the `helpers.c` and `helpers.h` files to implement sorting and searching algorithms.

2. **Input:**
   - An array of integers that needs to be sorted.

3. **Output:**
   - The sorted array in ascending order.

4. **Execution:**
   - Implement the `sort` function in `helpers.c`.
   - Compile the program using `make` and test it with the provided tools.

---

## Example Usage

### Input and Output
Input array:
