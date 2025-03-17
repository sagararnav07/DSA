Let's go through the code line by line with an example input to understand how it works.

---

### **Code Analysis**

#### **Preprocessor Directive and Header File**
```cpp
#include<bits/stdc++.h>
```
- This includes the **entire C++ Standard Library**, giving access to functions, containers, algorithms, etc.

#### **Namespace**
```cpp
using namespace std;
```
- Avoids the need to prefix `std::` before standard library functions like `cin` and `cout`.

#### **Function: `bubbleSort`**
```cpp
void bubbleSort(int arr[], int n)
```
- **Purpose**: Sorts an integer array `arr` of size `n` using the Bubble Sort algorithm.
- Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

---

#### **Outer Loop**
```cpp
for (int i = n - 1; i >= 0; i--) {
```
- Starts from the last index (`n-1`) and moves towards the beginning.
- Each pass ensures that the largest unsorted element "bubbles up" to its correct position.

---

#### **Inner Loop**
```cpp
for (int j = 0; j <= i - 1; j++) {
```
- Compares adjacent elements (`arr[j]` and `arr[j+1]`) up to the current unsorted part of the array.

---

#### **Comparison and Swap**
```cpp
if (arr[j] > arr[j + 1]) {
    int temp = arr[j + 1];
    arr[j + 1] = arr[j];
    arr[j] = temp;
    int didSwap = 1;
}
```
- If the current element (`arr[j]`) is greater than the next element (`arr[j+1]`), they are swapped.
- A flag `didSwap` is set to `1` to indicate that a swap occurred, meaning the array might not yet be sorted.

---

#### **Optimization**
```cpp
if (didSwap == 0) {
    break;
}
```
- If no swaps were made during a pass, the array is already sorted, and the algorithm exits early.

---

#### **Main Function**
```cpp
int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
```
- Prompts the user to input the size (`n`) of the array.

---

#### **Array Input**
```cpp
int arr[n];
cout << "Enter the elements of size " << n << " array" << endl;
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}
```
- Dynamically declares an array of size `n`.
- Accepts `n` integers from the user.

---

#### **Calling `bubbleSort`**
```cpp
bubbleSort(arr, n);
```
- Sorts the input array using Bubble Sort.

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
Enter the elements of size 5 array
5 3 8 6 2
```

### **Step-by-Step Execution**

#### **Initial Array**: `[5, 3, 8, 6, 2]`

1. **First Pass (i = 4)**:
   - Compare `5` and `3`: Swap → `[3, 5, 8, 6, 2]`
   - Compare `5` and `8`: No Swap → `[3, 5, 8, 6, 2]`
   - Compare `8` and `6`: Swap → `[3, 5, 6, 8, 2]`
   - Compare `8` and `2`: Swap → `[3, 5, 6, 2, 8]`

2. **Second Pass (i = 3)**:
   - Compare `3` and `5`: No Swap → `[3, 5, 6, 2, 8]`
   - Compare `5` and `6`: No Swap → `[3, 5, 6, 2, 8]`
   - Compare `6` and `2`: Swap → `[3, 5, 2, 6, 8]`

3. **Third Pass (i = 2)**:
   - Compare `3` and `5`: No Swap → `[3, 5, 2, 6, 8]`
   - Compare `5` and `2`: Swap → `[3, 2, 5, 6, 8]`

4. **Fourth Pass (i = 1)**:
   - Compare `3` and `2`: Swap → `[2, 3, 5, 6, 8]`

5. **Fifth Pass (i = 0)**:
   - No comparisons are neede0od.

---

### **Final Output**
```
The sorted array is:
2 3 5 6 8
```