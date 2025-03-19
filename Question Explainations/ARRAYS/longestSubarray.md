#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int longestSubarrayWithSumK(const vector<int>& arr, int K) {
    unordered_map<int, int> prefixSumMap;  // Maps prefix sum to index
    int maxLength = 0;                      // Stores the length of the longest subarray found
    int prefixSum = 0;                      // Keeps track of the cumulative sum (prefix sum)

    // Iterate through the array
    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];  // Add the current element to the prefix sum

        // If the current prefix sum equals K, the subarray from index 0 to i has sum K
        if (prefixSum == K) {
            maxLength = i + 1;  // Subarray starts from index 0 and ends at index i
        }

        // If prefixSum - K exists in the map, it means a subarray with sum K exists
        if (prefixSumMap.find(prefixSum - K) != prefixSumMap.end()) {
            maxLength = max(maxLength, i - prefixSumMap[prefixSum - K]);
        }

        // Store the first occurrence of the prefix sum
        if (prefixSumMap.find(prefixSum) == prefixSumMap.end()) {
            prefixSumMap[prefixSum] = i;
        }
    }

    return maxLength;  // Return the length of the longest subarray with sum K
}

int main() {
    vector<int> arr = {1, -1, 5, -2, 3};  // Example array
    int K = 3;  // Target sum

    int result = longestSubarrayWithSumK(arr, K);
    cout << "The length of the longest subarray with sum " << K << " is: " << result << endl;

    return 0;
}


Certainly! Let’s walk through the code in **detail** to understand each part of the algorithm and how it works step by step.

### Full Code:

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int longestSubarrayWithSumK(const vector<int>& arr, int K) {
    unordered_map<int, int> prefixSumMap;  // Maps prefix sum to index
    int maxLength = 0;                      // Stores the length of the longest subarray found
    int prefixSum = 0;                      // Keeps track of the cumulative sum (prefix sum)

    // Iterate through the array
    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];  // Add the current element to the prefix sum

        // If the current prefix sum equals K, the subarray from index 0 to i has sum K
        if (prefixSum == K) {
            maxLength = i + 1;  // Subarray starts from index 0 and ends at index i
        }

        // If prefixSum - K exists in the map, it means a subarray with sum K exists
        if (prefixSumMap.find(prefixSum - K) != prefixSumMap.end()) {
            maxLength = max(maxLength, i - prefixSumMap[prefixSum - K]);
        }

        // Store the first occurrence of the prefix sum
        if (prefixSumMap.find(prefixSum) == prefixSumMap.end()) {
            prefixSumMap[prefixSum] = i;
        }
    }

    return maxLength;  // Return the length of the longest subarray with sum K
}



int main() {
    vector<int> arr = {1, -1, 5, -2, 3};  // Example array
    int K = 3;  // Target sum

    int result = longestSubarrayWithSumK(arr, K);
    cout << "The length of the longest subarray with sum " << K << " is: " << result << endl;

    return 0;
}
```

### Detailed Explanation:

#### 1. **Function Definition:**
   ```cpp
   int longestSubarrayWithSumK(const vector<int>& arr, int K)
   ```
   - **Purpose:** This function takes an array `arr` and an integer `K`, and returns the length of the longest subarray whose sum is equal to `K`.

   **Parameters:**
   - `arr`: A vector of integers representing the array.
   - `K`: The target sum of the subarray.

#### 2. **Variable Initialization:**
   ```cpp
   unordered_map<int, int> prefixSumMap;  // Stores the first occurrence of each prefix sum
   int maxLength = 0;                      // To keep track of the longest subarray length
   int prefixSum = 0;                      // The cumulative sum (prefix sum) of elements as we iterate
   ```
   - **prefixSumMap:** This hash map (unordered_map) will store each `prefixSum` value and the first index where this sum is encountered.
     - **Key:** `prefixSum` (the cumulative sum up to an index).
     - **Value:** The index where this `prefixSum` first appears.
   
   - **maxLength:** This variable holds the length of the longest subarray whose sum is `K`. We initialize it to `0` because initially, we haven't found any valid subarray.
   
   - **prefixSum:** This variable accumulates the sum of elements from the start of the array to the current element.

#### 3. **Main Loop (Iterating over the Array):**
   ```cpp
   for (int i = 0; i < arr.size(); i++) {
       prefixSum += arr[i];  // Add the current element to the prefix sum
   ```
   - The loop iterates through each element in the array, and for each element, we add it to `prefixSum`. This will accumulate the sum of all elements up to the current index.
   
#### 4. **Check if the Prefix Sum Equals `K`:**
   ```cpp
   if (prefixSum == K) {
       maxLength = i + 1;  // Subarray starts from index 0 and ends at index i
   }
   ```
   - If at any point the `prefixSum` equals `K`, it means the subarray starting from index `0` to the current index `i` has a sum of `K`.
   - We update `maxLength` to the length of this subarray: `i + 1` (because array indices start from 0).
   
#### 5. **Check if a Subarray with Sum `K` Exists:**
   ```cpp
   if (prefixSumMap.find(prefixSum - K) != prefixSumMap.end()) {
       maxLength = max(maxLength, i - prefixSumMap[prefixSum - K]);
   }
   ```
   - Here, we check if `prefixSum - K` has already been encountered in the array. If so, it means there exists a subarray (between the previous index and the current index) that has a sum of `K`.
   
   - For example:
     - If `prefixSum = 7` and `K = 3`, then we check if `prefixSum - K = 4` is in the map.
     - If it is, it means there is a subarray with sum `3` between the index where `prefixSum = 4` first occurred and the current index `i`.
   
   - If such a subarray is found, we calculate its length `i - prefixSumMap[prefixSum - K]` and update `maxLength` if it's longer than the current `maxLength`.

#### 6. **Store the First Occurrence of `prefixSum`:**
   ```cpp
   if (prefixSumMap.find(prefixSum) == prefixSumMap.end()) {
       prefixSumMap[prefixSum] = i;
   }
   ```
   - We store the first occurrence of each `prefixSum` in the map, but only if it hasn't been seen before (`prefixSumMap.find(prefixSum) == prefixSumMap.end()`).
   
   - This ensures we always store the first occurrence of each `prefixSum`, as we want the longest subarray, not the shortest.
   
#### 7. **Return the Result:**
   ```cpp
   return maxLength;
   ```
   - After processing the entire array, we return the length of the longest subarray found that has sum `K`.

### `main` Function:
```cpp
int main() {
    vector<int> arr = {1, -1, 5, -2, 3};  // Example array
    int K = 3;  // Target sum

    int result = longestSubarrayWithSumK(arr, K);
    cout << "The length of the longest subarray with sum " << K << " is: " << result << endl;

    return 0;
}
```
- **Purpose:** The `main` function initializes an example array and calls `longestSubarrayWithSumK` with the array and the target sum `K = 3`. It then prints the result.

### Example Walkthrough:

Let’s walk through an example array `{1, -1, 5, -2, 3}` with `K = 3`.

- **Initial state:** 
  - `prefixSum = 0`
  - `maxLength = 0`
  - `prefixSumMap = {}`

- **Iteration 1 (`i = 0`):** 
  - `arr[0] = 1`
  - `prefixSum = 0 + 1 = 1`
  - `prefixSum != K` → no update to `maxLength`.
  - `prefixSum - K = 1 - 3 = -2` → not in map.
  - `prefixSumMap = {1: 0}` (first occurrence of `1`).

- **Iteration 2 (`i = 1`):**
  - `arr[1] = -1`
  - `prefixSum = 1 + (-1) = 0`
  - `prefixSum != K` → no update to `maxLength`.
  - `prefixSum - K = 0 - 3 = -3` → not in map.
  - `prefixSumMap = {1: 0, 0: 1}`.

- **Iteration 3 (`i = 2`):**
  - `arr[2] = 5`
  - `prefixSum = 0 + 5 = 5`
  - `prefixSum != K` → no update to `maxLength`.
  - `prefixSum - K = 5 - 3 = 2` → not in map.
  - `prefixSumMap = {1: 0, 0: 1, 5: 2}`.

- **Iteration 4 (`i = 3`):**
  - `arr[3] = -2`
  - `prefixSum = 5 + (-2) = 3`
  - `prefixSum == K` → `maxLength = 3 + 1 = 4` (subarray `{1, -1, 5, -2}`).
  - `prefixSum - K = 3 - 3 = 0` → found at index `1`.
  - `maxLength = max(4, 3 - 1) = 4`.
  - `prefixSumMap = {1: 0, 0: 1, 5: 2, 3: 3}`.

- **Iteration 5 (`i = 4`):**
  - `arr[4] = 3`
  - `prefixSum = 3 + 3 = 6`
  - `prefixSum != K` → no update to `maxLength`.
  - `prefixSum - K = 6 - 3 = 3` → found at index `3`.
  - `maxLength = max(4, 4 - 3) = 4`.
  - `prefixSumMap = {1: 0, 0: 1, 5: 2, 3: 3, 6: 4}`.

### Final Output:
After all iterations, the longest subarray with sum `K = 3` has length `4`, and the program prints:
```
The length of the longest subarray with sum 3 is: 4
```

### Complexity:
- **Time Complexity:** O(N) because we loop through the array once, and the operations in the hash map (insertions and lookups) are constant time on average.
- **Space Complexity:** O(N) due to the space used by the hash map to store prefix sums.