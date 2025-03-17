Let's break down this **Selection Sort** program step by step using an example.

---

### Program Overview:
- **Selection Sort** is a simple sorting algorithm that repeatedly finds the minimum element from the unsorted portion of an array and places it at the beginning.
- The algorithm divides the array into two parts:  
  1. **Sorted part** (initially empty).  
  2. **Unsorted part** (initially the whole array).  

Each iteration moves the minimum element from the unsorted part to the sorted part.

---

### Example Input:
Suppose the user enters the following:  
```
Enter the size of the array: 5  
Enter your array: 64 25 12 22 11  
```

---

### Step-by-Step Execution:

#### Initial Array:
```
arr = [64, 25, 12, 22, 11]
n = 5
```

#### Outer Loop (i = 0 to n-2):
The outer loop iterates over each position in the array where the next smallest element will be placed.

---

#### **Step 1: i = 0** (First Iteration)
- Set `min = 0` (index of the first element, `64`).
- Inner loop (`j = 0 to 4`) finds the minimum in the unsorted part:
  - Compare `arr[j]` with `arr[min]`:  
    - `j = 0`: `64` vs `64` → `min = 0`  
    - `j = 1`: `25` vs `64` → `min = 1`  
    - `j = 2`: `12` vs `25` → `min = 2`  
    - `j = 3`: `22` vs `12` → `min = 2`  
    - `j = 4`: `11` vs `12` → `min = 4`  
- Minimum element is at index `4` (`11`).
- Swap `arr[i]` with `arr[min]` → Swap `arr[0]` and `arr[4]`.
- Array after the swap:  
  ```
  arr = [11, 25, 12, 22, 64]
  ```

---

#### **Step 2: i = 1** (Second Iteration)
- Set `min = 1` (index of `25`).
- Inner loop (`j = 1 to 4`) finds the minimum in the remaining unsorted part:
  - Compare `arr[j]` with `arr[min]`:  
    - `j = 1`: `25` vs `25` → `min = 1`  
    - `j = 2`: `12` vs `25` → `min = 2`  
    - `j = 3`: `22` vs `12` → `min = 2`  
    - `j = 4`: `64` vs `12` → `min = 2`  
- Minimum element is at index `2` (`12`).
- Swap `arr[i]` with `arr[min]` → Swap `arr[1]` and `arr[2]`.
- Array after the swap:  
  ```
  arr = [11, 12, 25, 22, 64]
  ```

---

#### **Step 3: i = 2** (Third Iteration)
- Set `min = 2` (index of `25`).
- Inner loop (`j = 2 to 4`) finds the minimum in the remaining unsorted part:
  - Compare `arr[j]` with `arr[min]`:  
    - `j = 2`: `25` vs `25` → `min = 2`  
    - `j = 3`: `22` vs `25` → `min = 3`  
    - `j = 4`: `64` vs `22` → `min = 3`  
- Minimum element is at index `3` (`22`).
- Swap `arr[i]` with `arr[min]` → Swap `arr[2]` and `arr[3]`.
- Array after the swap:  
  ```
  arr = [11, 12, 22, 25, 64]
  ```

---

#### **Step 4: i = 3** (Fourth Iteration)
- Set `min = 3` (index of `25`).
- Inner loop (`j = 3 to 4`) finds the minimum in the remaining unsorted part:
  - Compare `arr[j]` with `arr[min]`:  
    - `j = 3`: `25` vs `25` → `min = 3`  
    - `j = 4`: `64` vs `25` → `min = 3`  
- Minimum element is already at index `3` (`25`).
- No swap needed.
- Array remains:  
  ```
  arr = [11, 12, 22, 25, 64]
  ```

---

#### **Step 5: i = 4** (Fifth Iteration)
- No further iterations are needed, as the last element is already sorted.

---

### Final Sorted Array:
```
arr = [11, 12, 22, 25, 64]
```

---

### Output:
The program prints:
```
Sorted Array
11 12 22 25 64
```

---

### Key Points:
1. **Time Complexity**:  
   - Best, Worst, Average: \( O(n^2) \), because of the nested loops.  
2. **Space Complexity**:  
   - \( O(1) \), as it sorts the array in place.  
3. **Stable/Unstable**:  
   - Unstable, as equal elements may not retain their original order after sorting.