#include<bits/stdc++.h>
using namespace std;

void reverseArray(vecor<int> &arr){
     int left = 0;             // Pointer to the beginning of the array
     int right = arr.size() - 1; // Pointer to the end of the array

 while (left < right) {
        swap(arr[left], arr[right]); // Swap the elements at 'left' and 'right'
        left++;                      // Move the left pointer to the right
        right--;               
    }
};

int main()
  { 
    int n;
    cin>>n;
    reverseArray(n)
  } 