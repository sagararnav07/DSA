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

6."*" :- it is called star or deference operator which is used to get the value at a given address 
calue ko nikalne ke lie use hota h 
*/
int main()
{   //1.
    int a =10;
    cout << &a << endl; // output: "0x61ff0c"
    

    int* ptr = &a;
    cout << ptr << endl; // output: "0x61ff0c"
    
    //2.
    //pointers works in any data type
    float b = 10.7563;
    float* ptr2 = &b;
    cout << ptr2 << endl;
     
    //let's see the memory location of the pointer variable that stores the data
    cout << &ptr << endl;
    cout << &ptr2 << endl;


    //3.
    //double pointer
    int** D_ptr = &ptr;
    cout << "the double pointer value is:-" << D_ptr << endl;

    
    //Defrencing -> to extract value store at a memory locaton or derefrencing it, * -> this is called both star as well as derefrencing operator
    cout << "value of 1 :-" << *ptr << endl; //defrencing -> getting value inside the pointer  //output:-10
    cout << "value of 2 :-" <<**D_ptr << endl; //ouput 10;
    cout << "value of 3 :-" <<*ptr2 << endl; //output 10.7563
    cout << *(&a) << endl; //ouput 10; 

    //Triple pointer not used basically anywhere 
    int*** X_ptr = &D_ptr;
    cout << "triple pointer" << ***X_ptr << endl;

    /* NULL POINTER :- a pointer variable that does not point to a memory location is called null pointer
    Iksa use mostly Linked list aur Trees me hi hota hai, for i.e hume nahi pata the last node kisko point kar 
    raha h to usko humlog nullptr assign kar dete hai*/

    
}