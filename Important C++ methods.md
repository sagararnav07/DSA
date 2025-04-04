C++ has a rich set of built-in methods, particularly within its standard library. Here are some of the most important ones, categorized for better understanding:

---

## 📌 **String Methods**
- `length()` / `size()` → Returns the number of characters in a string.
- `substr(start, length)` → Extracts a substring.
- `find(str)` → Finds the first occurrence of a substring.
- `append(str)` → Appends a string to another.
- `insert(pos, str)` → Inserts a string at a specific position.
- `erase(pos, len)` → Removes characters from a string.
- `replace(pos, len, str)` → Replaces part of a string.



---

## 📌 **Vector Methods**
- `push_back()` → Adds an element to the end.
- `pop_back()` → Removes the last element.
- `insert(pos, value)` → Inserts an element at a position.
- `erase(pos)` → Removes an element at a position.
- `size()` → Returns the number of elements.
- `clear()` → Removes all elements.
- `empty()` → Checks if the vector is empty.
- `sort()` → Sorts the vector.

---

## 📌 **Algorithm Methods**
You’ll often use functions from `<algorithm>`:
- `sort(begin, end)` → Sorts a range of elements.
- `reverse(begin, end)` → Reverses elements in a range.
- `min()` / `max()` → Returns the minimum or maximum value.
- `count(begin, end, value)` → Counts occurrences of a value.
- `find(begin, end, value)` → Finds the first occurrence of a value.
- `binary_search(begin, end, value)` → Performs a binary search.

---

## 📌 **STL (Standard Template Library) Methods**
- **Pair**: `make_pair(a, b)` → Creates a pair of values.
- **Map**: 
  - `insert(pair)` → Inserts a key-value pair.
  - `erase(key)` → Removes a key-value pair.
  - `find(key)` → Finds a key and returns an iterator.
- **Set**: 
  - `insert(value)` → Inserts a unique value.
  - `erase(value)` → Removes a value.
  - `count(value)` → Checks if a value exists.

---

## 📌 **Mathematical Methods (`<cmath>`)**
- `sqrt(x)` → Square root.
- `pow(x, y)` → x to the power of y.
- `abs(x)` → Absolute value.
- `ceil(x)` → Rounds up to the nearest integer.
- `floor(x)` → Rounds down to the nearest integer.
- `sin(x)`, `cos(x)`, `tan(x)` → Trigonometric functions.

---

## 📌 **File I/O Methods (`<fstream>`)**
- `ofstream` → Write to files.
- `ifstream` → Read from files.
- `is_open()` → Checks if a file is open.
- `close()` → Closes the file.
- `getline()` → Reads a line from the file.

---

Would you like detailed examples or explanations of how to use any specific method?