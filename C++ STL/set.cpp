#include<bits/stdc++.h>
using namespace std;

/*std::set in C++
A std::set in C++ is a sorted associative container that stores unique elements in a specific order. It is part of the C++ Standard Library and is defined in the <set> header.

Here are the key characteristics and features of a std::set:

Key Characteristics of std::set:
Ordered Collection:

The elements in a std::set are always sorted in a particular order (by default, in ascending order based on their values). This ordering is determined by a comparison function, which defaults to operator< for the elements.
The order of elements can be changed by passing a custom comparator function to the set when defining it.
Unique Elements:

Duplicates are not allowed in a std::set. If you attempt to insert a duplicate value, the insertion will be ignored, and the set remains unchanged.
Associative Container:

Like maps, sets are associative containers that provide fast lookup based on keys. However, unlike a std::map, a std::set only stores the key (not a key-value pair).
Efficient Operations:

The operations like insertion, deletion, and search are typically performed in O(log n) time complexity due to the underlying balanced binary search tree (commonly a Red-Black Tree).
No Random Access:

Unlike arrays or vectors, random access is not allowed in a std::set. You cannot access elements by an index (e.g., set[0] is not valid).
Elements can only be accessed by iterators.
Basic Operations on std::set:
Insertion:

Insert elements using the insert() method.
Returns a pair containing an iterator to the inserted element and a boolean indicating whether the insertion was successful.
Deletion:

You can remove an element using erase() by passing either an iterator or the value itself.
You can remove all elements using clear().
Lookup:

You can check if an element exists in the set using find() (which returns an iterator) or use the count() function (which returns 0 or 1 for absence or presence).
Size and Empty Check:

The size() function returns the number of elements, and empty() checks if the set is empty.
Iterating:

Since sets do not allow random access, you can iterate through them using iterators.*/

void explainSet(){
   
   //1. SET STORES VALUE IN SORTED ORDER AND EVERY VALUE IS UNIQUE
    set<int> st = {1,2,3,7,9,23,4,5,6,7,8,9,9,4,5,1,2}; // output: 1 2 3 4 5 6 7 8 9 23 
    
    //2. DYNAMIC INSERTION IS ALLOWED 
    st.insert(19);


    //3.. DYNAMICALY FIND AND DELETE ELEMENT

    auto it = st.find(3);
    st.erase(it); //will erase 3
       //or
    st.erase(5); //will earse 5
     
     //4.CAN USE AUTO TO ITERATE AND PRINT THE SET

     for(auto i : st){
        cout << i << " " << endl;
    }

    //5.LET'S TAKE THAT YOU WANT TO ERASE AT CERTAIN RANGE (for i.e here we will delete from 20 to 40)

    set<int> sm = {10,20,100,30,300,40,500,60,70};
    auto it1 = sm.find(20);
    auto it2 = sm.find(40);
    sm.erase(it1,it2);
                         //OUTPUT: 10,40,60,70,100,300,500  //20 and 30 is deleted
    for(auto s : sm){
        cout << s << " " << endl;
    }


    //6. COUNT OCCURANCES

    int v = st.count(1);
}

int main(){
    explainSet();
}