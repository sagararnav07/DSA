
#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr){

     int left = 0;             // Pointer to the beginning of the array
     int right = arr.size() - 1; // Pointer to the end of the array

 while (left < right) {
        swap(arr[left], arr[right]); // Swap the elements at 'left' and 'right'
        left++;                      // Move the left pointer to the right
        right--;               
    }
}

int main() {
    // Declare a vector and take input from the user
    int n; // Size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n); // Initialize the vector with size n
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements into the vector
    }

    // Reverse the array
    reverseArray(arr);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}