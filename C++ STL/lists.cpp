#include<bits/stdc++.h>
using namespace std;

//LISTS ARE ALSO CONTAINERS IN C++ LIKE VECTORS THE ONLY DIFFERENCE IS THAT YOU CAN FRONT OPERATIONS EASILY IN LISTS
//LISTS ARE BULD USING DOUBLY LINKED LIST WHILE VECTORS USE SINGLY LINK LIST THAT'S WHY OPERATION IN LIST ARE LESS COSTLY

void explainLists(){


 //INITIALISE A LIST
    list<int> l = {1,2,3,4,5,6,7,8,9};
    for(auto i : l){
        cout << i << " ";
    }
    cout << endl;

//INSERTING VALUES DYNAMICALLY INTO A LIST (but at the back of the list)

   l.push_back(50);
   l.emplace_back(100);

//INSERTING ELEMENTS IN FRONT OF THE LIST DYNAMICALLY FOR THIS YOU NEED INSERT IN VECTORS

   l.push_front(29);
   l.emplace_front(39);

   for(auto it : l){
        cout << it << " ";
    }
    cout << endl;

//REST ALL ARE SAME AS VECTORS 

}


int main(){
    explainLists();
}