#include<bits/stdc++.h>
using namespace std;

// int arr[] :- arr is an array that points to the 1st element of the array we can check that 
int main()
{
  int arr[4] = {1,2,3,4};
  cout << *arr << endl; //ouput 1 because by default it points to the 1st element
  cout << sizeof(arr) << endl; // prints 16 (4 ints * 4 bytes)
  cout << &arr[0] << endl; //prints random memory location 

  //array pointer is a constant pointer and it cannot be changed 
  int a =10; int b = 20;
  int* ptr = &a;
  ptr = &b;

  cout << *ptr << endl; // output 20 "because normal pointer values can be modified with declaration but not with array pointer"

  

} 

