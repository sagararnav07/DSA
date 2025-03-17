#include<bits/stdc++.h>
using namespace std;

void explainMultiSet(){
   //THE ONLY DIFFERENCE IN SET AND MULTISET IS THAT : SET STORES SORTED AND UNIQUE ELEMENTS BUT 
   //MULTISET STORES MULTIPLE OCCURANCES OF SAME ELEMENT

   multiset<int> ms = {1,2,9,30,30,4,40,4,6,17,8,18,9,9};
   for(auto i : ms){ //output : 1 2 4 4 6 8 9 9 9 17 18 30 30 40 
    cout << i << " ";
   } 

   //rest all are same as set


}

int main(){
    explainMultiSet();
}