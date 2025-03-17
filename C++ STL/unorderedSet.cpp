#include<bits/stdc++.h>
using namespace std;

void explainUnorderedSet(){
  

    //EVERYTHING IS SAME IN AN UNORDERED SET BUT THE ONLY DIFFERENCE IT MAKES IS THAT 
    //IT CAN STORE THE ELEMENTS IN ANY FCKIN RANDOM ORDER 
    //BUT IT FOLLOWS THE SECOND RULE AND IT STORE UNIQUE ELEMENTS OR ONLY ONE OCCURENCE OF PARTICULAR EKEMENT

    unordered_set<int> us = {1,2,2,2,4,5,5,3,1,8,7,6,9};

    for(auto i : us){
        cout << i << " "; //OUTPUT: 9 6 7 8 3 5 4 2 1 or any random order
    }
}

int main(){
    explainUnorderedSet();
}