Here's a detailed yet brief explanation of each of the important C++ methods along with examples:

---

## 📌 **String Methods**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";

    cout << "Length: " << str.length() << endl; // Length: 13
    cout << "Substring: " << str.substr(7, 5) << endl; // World
    cout << "Find: " << str.find("World") << endl; // 7
    cout << "Append: " << str.append(" C++") << endl; // Hello, World! C++
    
    str.insert(5, " Coder");
    cout << "Insert: " << str << endl; // Hello Coder, World! C++

    str.erase(5, 7);
    cout << "Erase: " << str << endl; // Hello, World! C++

    str.replace(7, 5, "Universe");
    cout << "Replace: " << str << endl; // Hello, Universe! C++
}
```

---

## 📌 **Vector Methods**

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    vec.push_back(6); // {1, 2, 3, 4, 5, 6}
    vec.pop_back(); // {1, 2, 3, 4, 5}
    
    vec.insert(vec.begin() + 2, 10); // {1, 2, 10, 3, 4, 5}
    vec.erase(vec.begin() + 2); // {1, 2, 3, 4, 5}

    cout << "Size: " << vec.size() << endl; // 5

    vec.clear();
    cout << "Is Empty: " << vec.empty() << endl; // 1 (true)
}
```

---

## 📌 **Algorithm Methods**
Make sure to include `<algorithm>`.

```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {5, 2, 8, 1, 3};

    sort(vec.begin(), vec.end()); // {1, 2, 3, 5, 8}
    reverse(vec.begin(), vec.end()); // {8, 5, 3, 2, 1}
    
    cout << "Min: " << *min_element(vec.begin(), vec.end()) << endl; // 1
    cout << "Max: " << *max_element(vec.begin(), vec.end()) << endl; // 8
    cout << "Count of 5: " << count(vec.begin(), vec.end(), 5) << endl; // 1
    
    if (find(vec.begin(), vec.end(), 3) != vec.end())
        cout << "3 Found!" << endl;
}
```

---

## 📌 **STL Methods**

### **Pair**
```cpp
#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p = make_pair(1, "Alice");
    cout << p.first << " " << p.second << endl; // 1 Alice
}
```

### **Map**
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m.insert({"Alice", 23});
    m.insert({"Bob", 30});
    m.erase("Bob");

    if (m.find("Alice") != m.end()) 
        cout << "Alice Found!" << endl;
}
```

### **Set**
```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 2, 3};
    s.insert(4);
    s.erase(2);

    cout << "Count of 3: " << s.count(3) << endl; // 1
}
```

---

## 📌 **Mathematical Methods**

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Square root of 25: " << sqrt(25) << endl; // 5
    cout << "2^3: " << pow(2, 3) << endl; // 8
    cout << "Absolute value: " << abs(-10) << endl; // 10
    cout << "Ceil 4.3: " << ceil(4.3) << endl; // 5
    cout << "Floor 4.7: " << floor(4.7) << endl; // 4
}
```

---

## 📌 **File I/O Methods**

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("test.txt");
    outFile << "Hello, File!";
    outFile.close();

    ifstream inFile("test.txt");
    string content;
    getline(inFile, content);
    cout << "File Content: " << content << endl; // Hello, File!
    inFile.close();
}
```

---

These examples cover most of the essential C++ methods. If you'd like further explanations or deeper use cases, feel free to ask! 😊