#include <bits/stdc++.h>
using namespace std;

void explainMaps() {
    // MAPS ARE KEY-VALUE PAIRS. FOR INSTANCE, IF THERE ARE MULTIPLE STUDENTS WITH THE SAME NAME,
    // EACH OF THEM CAN BE IDENTIFIED BY A UNIQUE KEY.
    // MAPS STORE VALUES IN SORTED ORDER BY DEFAULT.

    // 1. Map with 1 key and 1 value
    map<int, int> mp;
    mp[1] = 5;              // Assign value 5 to key 1
    mp.insert({2, 4});       // Insert key 2 with value 4

    // 2. Map with 1 key and a pair (multiple values)
    map<int, pair<int, int>> mpp;
    mpp[0] = {2, 3};         // Assign pair {2, 3} to key 0

    // 3. Map with a pair as the key and 1 value
    map<pair<int, int>, int> mpps;
    mpps[{2, 3}] = 10;       // Assign value 10 to the key pair {2, 3}

    // Printing the map with single keys and pairs as values
    cout << "Map with single key and pair values:" << endl;
    for (auto i : mpp) {
        cout << "Key: " << i.first << ", Value: {" << i.second.first << ", " << i.second.second << "}" << endl;
    }

    // Printing the map with pairs as keys
    cout << "\nMap with pair keys and single values:" << endl;
    for (auto i : mpps) {
        cout << "Key: {" << i.first.first << ", " << i.first.second << "}, Value: " << i.second << endl;
    }
}

int main() {
    // Call the function to explain maps
    explainMaps();

    return 0;
}
