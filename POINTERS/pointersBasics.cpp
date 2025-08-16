#include<bits/stdc++.h>
using namespace std;

/*
1. Pointers:- it is a conecpt in which a variable points to the memeory location of another variable
memory location is nothing but a variable that stores a data at a given location which is a hexadecimal value

2. & :- it is called an "address of operator" which is used to access the address of a given variable for i.e
  if we want to print the address of a variable that has some value like 
  "int a = 10;"  then we can get it's address by "cout << &a << endl";

3. * :- it is the "star operator" which is used to store the memory location of another variable for i.e 
    "int a =10;"" we can store the memory location of a by "int* ptr = &a;"

4. the variable that stores the memory location of another variable also have a memory location which you can see 
by "cout << &ptr << endl;"

5. Double pointer :- Double pointer or pointer to pointer is a concept in which another pointer variable stores the 
memory location of the first pointer for i.e taking above example of ptr
  int** Dptr = &ptr; like this
*/
int main()
{
    int a =10;
    cout << &a << endl; // output: "0x61ff0c"
    

    int* ptr = &a;
    cout << ptr << endl; // output: "0x61ff0c"
    
    //pointers works in any data type
    float b = 10.7563;
    float* ptr2 = &b;
    cout << ptr2 << endl;

    //let's see the memory location of the pointer variable that stores the data
    cout << &ptr << endl;
    cout << &ptr2 << endl;

    //double pointer

    int** D_ptr = &ptr;
    cout << "the double pointer value is:-" << D_ptr << endl;
}