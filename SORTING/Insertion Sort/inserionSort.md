Let's go through this code line by line and understand how it works using an example input.

---

### **Code Analysis**

#### **Preprocessor Directive and Header File**
```cpp
#include<bits/stdc++.h>
```
- Includes the entire C++ Standard Library.

#### **Namespace**
```cpp
using namespace std;
```
- Avoids prefixing `std::` before standard library functions.

---

#### **Function: `insertionSort`**
```cpp
void insertionSort(int arr[], int n)
```
- **Purpose**: Sorts an integer array `arr` of size `n` using the Insertion Sort algorithm.
- Insertion Sort builds the sorted array one element at a time by repeatedly picking the next element and placing it in its correct position.

---

#### **Outer Loop**
```cpp
for (int i = 0; i <= n - 1; i++) {
```
- Starts from the first element (`i = 0`) and iterates through the array.
- The element at index `i` is the current element being placed in its correct position within the sorted part of the array.

---

#### **Inner Loop (Shifting Elements)**
```cpp
while (j > 0 && arr[j - 1] > arr[j]) {
```
- Compares the current element (`arr[j]`) with the previous element (`arr[j-1]`).
- If `arr[j-1]` is greater, the two elements are swapped, and the pointer `j` is moved left (`j--`).

---

#### **Swap Operation**
```cpp
int temp = arr[j - 1];
arr[j - 1] = arr[j];
arr[j] = temp;
```
- Swaps adjacent elements to move the current element to its correct position in the sorted portion.

---

#### **Main Function**
```cpp
int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
```
- Prompts the user for the size of the array.

---

#### **Array Input**
```cpp
int arr[n];
cout << "Enter the elements of the array to be sorted" << endl;
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}
```
- Dynamically declares an array of size `n` and accepts `n` integers as input.

---

#### **Calling `insertionSort`**
```cpp
insertionSort(arr, n);
```
- Sorts the input array using the Insertion Sort algorithm.

---

#### **Output**
```cpp
cout << "The sorted array is:" << endl;
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
```
- Prints the sorted array.

---

### **Example Input**
```
Enter the size of the array
5
Enter the elements of the array to be sorted
5 3 8 6 2
```

---

### **Step-by-Step Execution**

#### **Initial Array**: `[5, 3, 8, 6, 2]`

1. **First Pass (i = 0)**:
   - `arr[0]` is already in its correct position. 
   - **Array after pass**: `[5, 3, 8, 6, 2]`

2. **Second Pass (i = 1)**:
   - Compare `3` with `5`:
     - Swap → `[3, 5, 8, 6, 2]`
   - **Array after pass**: `[3, 5, 8, 6, 2]`

3. **Third Pass (i = 2)**:
   - Compare `8` with `5`: No Swap.
   - **Array after pass**: `[3, 5, 8, 6, 2]`

4. **Fourth Pass (i = 3)**:
   - Compare `6` with `8`: Swap → `[3, 5, 6, 8, 2]`
   - Compare `6` with `5`: No Swap.
   - **Array after pass**: `[3, 5, 6, 8, 2]`

5. **Fifth Pass (i = 4)**:
   - Compare `2` with `8`: Swap → `[3, 5, 6, 2, 8]`
   - Compare `2` with `6`: Swap → `[3, 5, 2, 6, 8]`
   - Compare `2` with `5`: Swap → `[3, 2, 5, 6, 8]`
   - Compare `2` with `3`: Swap → `[2, 3, 5, 6, 8]`
   - **Array after pass**: `[2, 3, 5, 6, 8]`

---

### **Final Output**
```
The sorted array is:
2 3 5 6 8
```