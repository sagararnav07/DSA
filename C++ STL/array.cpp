/* Array (C++ Array)
Definition: An array is a collection of elements of the same type stored in contiguous memory locations. The size of an array is fixed at the time of its creation and cannot be changed during runtime.

Characteristics:

Fixed size: The size of the array is determined at compile time and cannot be changed.
Homogeneous: All elements in an array must be of the same type.
Access: You can access elements using indices (starting from 0).*/

#include<bits/stdc++.h>
using namespace std;

void explainArray(){
 int arr[10];
   // An array of 5 integers
 arr[0] = 5;  // Accessing the first element
 arr[1] = 10;  // Accessing the first element
 arr[2] = 40;  // Accessing the first element
 arr[3] = 70;  // Accessing the first element
 arr[4] = 80;  // Accessing the first element
 arr[5] = 20;  // Accessing the first element
 int sizeUsed = 5;  // You know only 5 elements are used

 //suppose if we don't use sizeused then the other memory locations will be filled up with random garbage values
 //and the array is assigned in a serial manner so if have used sizeused but did not have assigned the array in the serial
 //manner then it would also give random values for unallocated memory locations 

 for (int i = 0; i <= sizeUsed; i++){
     cout << arr[i] << endl;
 }
}
int main(){
  explainArray();
}