#include<bits/stdc++.h>
using namespace std;

void explainStack(){
  
  //STACK FOLLOWS LIFO
  stack<int> st; //stack declaration
  st.push(3);
  cout<<st.top();
  

  // YOU CANNOT DIRECTLY INSERT ELEMENTS IN A STACK LIKE WITH LIST AND VECTORS BUT YOU CAN ISE LIST, ARRAYS AND VECTORS TO STORE VALUE IN A STACK 
  
  //1.vecor
  vector<int> v = {98, 65, 34, 12};
  for(auto i : v){
    st.push(i);
  }
  cout << endl;

  //2. array
  int insertStack[4] = {87, 45, 23 , 90}; 
  for(auto x : insertStack){
    st.push(x);
  }
  cout << endl;


  //3.list
  list<int> l = {20,50,70};
  for(auto j : l){
   st.push(j);
  }
  cout << endl ;

  //iterate and print the stack
     //1. store the stack into a temporary stack then use while loop to pop each out 
     stack<int> tempStack;

     while (!st.empty())
     {
        cout << st.top() << " ";
        tempStack.push(st.top());
        st.pop();
     }
     cout << endl;
  
// YOU CAN DO OPERATIONS IN STACK WITH ONLY 4 KEYWORDS :- 1.PUSH, 2.POP, 3.TOP, 4.STOP
//OTHER KEYWORDS ARE SIZE, EMPTY, SWAP
 cout << st.size() << endl; //0
 cout << st.empty() << endl; //01 (i.e true because you popped all the elements in tempStack)

//printing tempStack
 cout << tempStack.size() << endl;
 cout << tempStack.empty() << endl;


 //SWAPPING AGAIN "st" into "tempStack"

 tempStack.swap(st);
}



int main(){
   explainStack();
}