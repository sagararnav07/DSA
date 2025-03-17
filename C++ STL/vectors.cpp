/*
 Vector (C++ Standard Library std::vector)
Definition: A std::vector is a dynamic array that can grow or shrink in size during runtime. It is part of the C++ Standard Library and provides more flexibility compared to raw arrays.
Characteristics:
Dynamic size: The size of a vector can change during the program's execution. You can add or remove elements from a vector.
Homogeneous: All elements must be of the same type.
Access: Like an array, elements can be accessed using indices.

*/ 
#include<bits/stdc++.h>

using namespace std;

void explainVector(){

 //assigning vector p and inserting values dynamically using push_back or emplace_back(it will insert values at the back of the vector)
 vector<int> p;
  p.push_back(3);
  p.emplace_back(7);

  //assigning a pair in a vector

  vector<pair<int,int>> q;
  q.push_back({2,3});
  q.emplace_back(4,5); //when using emplace_back you don't need to use any curly braces as it automatically detects it
  
  //assigning a vector where a huge value is already assigned

  vector<int> k(5,100); //[100,100,100,100,100] here 5 instannces of 100 is already defined
  cout << k[3];
  //declaring a vecor with 5 memory locations withe empty values
  vector<int> j(5); //[0,0,0,0,0]

  //create a copy of a vector in anither vector
  vector<int> v1(7,20);
  vector<int> v2(v1); //v2 will be a copy of vector v1


//Accessing elements in a vector
vector<int> l = {10,20,30,40,50,60,70,80};
    //1. ITERATORS
    vector<int> :: iterator i = l.begin(); //see iterator will traverse but "v.begin points to the memory location not the value to print the value in that memory location you use "**
     i++;
     cout << *(i) << " "; //when we write "*" the value inside the memory location can be accesed

     //as "begin" there is an "end" too but it does't point at the last memory location, it actually points at the memory location after the last memory location and you can use i-- to print it.
         //vector<int> :: iterator j = l.end();
    //to accesss the last value in the vector we use "back"
    cout << l.back(); //will print 80
    cout << endl;
     



   //PRINTING VECTORS

//1. Normal iteration method
   for(vector<int> :: iterator it = l.begin(); it != l.end(); it++ ){
    cout << *(it) << " ";  //prints vector at line 40
   }
   cout << endl;



//or better way is using "auto"
//2. "auto" automatically detects the data type and iterates it with very simple syntax

    for(auto it = l.begin(); it != l.end(); it++ ){
       cout << *(it) << " ";  
    }
    cout << endl;

//even better
//3. "for each loop using auto" it's syntax is even simpler

 for(auto it : l){
    cout<< it << " ";
 }
cout << endl;



  //DELETING VECTORS

  //1. erasing single element 
  l.erase(l.begin() + 1); //here you give the iterator the address to delete  "erase(address)"
  //at line 40 it will erase 1st element like this{10,20,30,40,50,60,70,80} => {10,30,40,50,60,70,80} 
  for(auto m : l){
    cout<< m << " ";
    }
    cout << endl;




  //2. erasing multiple elements 
  l.erase(l.begin()+1, l.begin() +4);  //here you give the iterator the starting and end address to delete  "erase(start address, end address)"
  for(auto y : l){   //at line 83 we have already erased second elemet so it will print{10,30,40,50,60,70,80} => {10,60,70,80}
   cout << y << " ";
  }
  cout << endl;


   
//INSERING INTO VECTOR
  vector<int> inserting = {90, 30, 20, 70};
  //1.inserting a single element
  inserting.insert(inserting.begin(), 300);  //insert in the 0th position {300, 90, 30, 20, 70};
 
  //2.for inserting multiple elements for i.e if you want to inser three 10 after 90 (i.e 2nd position)
  inserting.insert(inserting.begin()+2,2,10); //output {300,90,10,10,30,20,70} 
  for(auto g : inserting ){
   cout << g << " "; 
  }
  cout << endl;


  //PRINT SIZE OF THE VECTOR 
  cout << inserting.size(); 
  cout << endl; //7

  //POP BACK THE LAST ELEMENT OF THE VECTOR  
  inserting.pop_back(); //{300,90,10,10,30,20,70} => output {300,90,10,10,30,20} 
  for(auto v : inserting){
   cout << v << " ";
  }
  cout << endl;

  //SWAP TWO VECTORS

  vector<int> x = {10,20};
  vector<int> y = {30,40};

  x.swap(y);
  for(auto z : x){
   cout << z << " ";
  }
  cout << endl;  //output {30,40}; 

   for(auto zh : y){
   cout << zh << " ";
  }
  cout << endl; //output {10,20};




  //CLEARING ALL THE ELEMENTS IN THE VECTOR
  vector<int> hg = {3,4,5,6,7,8,9,0};
  hg.clear();
  for(auto lk : hg){ //output {};
   cout << lk << " ";
  }
  cout << endl;


  //CHECK IF YOUR VECTOR IS EMPTY OR NOT
  cout << hg.empty(); //Output : 1 (i.e  TRUE)
  

} 

int main(){
 explainVector();
}