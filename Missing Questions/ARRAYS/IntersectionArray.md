#
### Brute Force Approach O(N1 * N2) Using just for loops
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        vector<int> interArray;
        
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (nums1[i] == nums2[j]) {
                    // Check if nums1[i] is already in interArray before adding
                    bool alreadyExists = false;
                    for (int k = 0; k < interArray.size(); k++) {
                        if (interArray[k] == nums1[i]) {
                            alreadyExists = true;
                            break;
                        }
                    }
                    if (!alreadyExists) {
                        interArray.push_back(nums1[i]);
                    }
                    break;
                }
            }
        }
        return interArray;
    }





    
### Optimise Approach O(N1 + N2) 

 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
   
    unordered_set<int> set;
    vector<int> interArray;
    
    // Insert all elements of arr1 into the unordered set
    for (int num : nums1) {
        set.insert(num);
    }
    
    // Iterate through arr2 and check if the element exists in the set
    for (int num : nums2) {
        if (set.find(num) != set.end()) {
            interArray.push_back(num);
            set.erase(num);  // Remove the element from the set to avoid duplicates in result
        }
    }

    return interArray;
}

Let's go through the code step-by-step and explain what happens at each line:

### Code:
```cpp
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
    unordered_set<int> set;              // Line 1
    vector<int> interArray;              // Line 2
    
    // Insert all elements of arr1 into the unordered set
    for (int num : arr1) {               // Line 3
        set.insert(num);                 // Line 4
    }
    
    // Iterate through arr2 and check if the element exists in the set
    for (int num : arr2) {               // Line 5
        if (set.find(num) != set.end()) { // Line 6
            interArray.push_back(num);    // Line 7
            set.erase(num);              // Line 8
        }
    }

    return interArray;                   // Line 9
}
```

### Line-by-Line Execution:

1. **Line 1:**
   ```cpp
   unordered_set<int> set;
   ```
   - An `unordered_set` named `set` is created. This set will be used to store elements from `arr1`. The `unordered_set` provides fast average time complexity of \( O(1) \) for lookups, insertions, and deletions.

2. **Line 2:**
   ```cpp
   vector<int> interArray;
   ```
   - A `vector<int>` named `interArray` is created. This vector will store the intersection of `arr1` and `arr2`.

3. **Line 3-4:**
   ```cpp
   for (int num : arr1) {
       set.insert(num);
   }
   ```
   - This `for` loop iterates over each element (`num`) in `arr1`.
   - On each iteration, `num` is inserted into the `set`.
   - After this loop, the `set` will contain all the elements of `arr1`. Since an `unordered_set` does not allow duplicates, any duplicate elements from `arr1` will only appear once.

   Example:
   If `arr1 = {1, 2, 2, 3}`, the `set` will become `{1, 2, 3}`.

4. **Line 5-6:**
   ```cpp
   for (int num : arr2) {
       if (set.find(num) != set.end()) {
   ```
   - This second `for` loop iterates over each element (`num`) in `arr2`.
   - For each element, `set.find(num)` checks if `num` exists in the `set`. 
   - The `find` function returns an iterator pointing to the element if it is found, or `set.end()` if it is not found.
   - The `if` condition checks if the element `num` is found in the `set` (i.e., `set.find(num) != set.end()`).

5. **Line 7:**
   ```cpp
   interArray.push_back(num);
   ```
   - If the element `num` was found in the set, it is added to the `interArray` vector.

6. **Line 8:**
   ```cpp
   set.erase(num);
   ```
   - After adding `num` to `interArray`, we call `set.erase(num)` to remove the element from the `set`. This ensures that each element from the intersection is added only once, even if it appears multiple times in `arr2`.

   Example:
   If `arr1 = {1, 2, 2, 3}` and `arr2 = {2, 2, 3, 3}`, during the first iteration when `num = 2`, it is found in the set and added to `interArray`. After that, `2` is erased from the set, so it won't be added again if it appears again in `arr2`.

7. **Line 9:**
   ```cpp
   return interArray;
   ```
   - After all the iterations, the `interArray` vector, which now contains the intersection of `arr1` and `arr2`, is returned.

---

### Example Walkthrough:

Let’s walk through an example where:

- `arr1 = {1, 2, 2, 3}`
- `arr2 = {2, 2, 3, 3}`

**Step 1**: Insert elements from `arr1` into the set:
- Initially, `set = {}`.
- Iterating through `arr1`, we insert the elements:
  - Insert `1`: `set = {1}`
  - Insert `2`: `set = {1, 2}`
  - Insert `2`: `set = {1, 2}` (no change due to duplicate)
  - Insert `3`: `set = {1, 2, 3}`

**Step 2**: Iterate over `arr2` and find intersections:
- Initially, `interArray = {}`.
- Iterating through `arr2`:
  - For `num = 2`: It’s found in the set, so `2` is added to `interArray` and removed from the set (`set = {1, 3}`).
  - For `num = 2`: It’s no longer in the set (since it was removed in the previous step), so it is skipped.
  - For `num = 3`: It’s found in the set, so `3` is added to `interArray` and removed from the set (`set = {1}`).
  - For `num = 3`: It’s no longer in the set, so it is skipped.

**Step 3**: Return the intersection:
- After the loop finishes, `interArray = {2, 3}`.
- The result is `{2, 3}`.

### Conclusion:
The code efficiently computes the intersection of two arrays using an `unordered_set`, providing an optimized solution with an average time complexity of \( O(n1 + n2) \), where \( n1 \) and \( n2 \) are the sizes of `arr1` and `arr2`, respectively.