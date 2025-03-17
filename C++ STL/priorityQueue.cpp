#include<bits/stdc++.h>
using namespace std;

void explainPriorityQueue(){

    /*A priority queue maintains elements in a partially ordered state based on their priority (not fully sorted). The highest (or lowest) priority element is always accessible and removed first.
It does not store elements in sorted order like an array or vector, but it ensures the correct element is always at the top for fast access and removal.*/


//PRIORITY QUEUE THAT STORES MAXIMUM ELEMENTS AT THE TOP
  priority_queue<int> pq;

  pq.push(5); //{5}
  pq.push(2); //{5,2}
  pq.push(8); //{8,5,2}
  pq.emplace(10); //{10,8,5,2}

  cout << pq.top() << " " << endl; //prints 10

  pq.pop();
  
  cout << pq.top() << " " << endl; //prints 8

//SAME AS STACK YOU CANNOT ITERATE AND PRINT QUEUE SO FOR PRINTING A QUEUE WE USE A TEMP QUEUE

  
  
  
  //PRIORITY QUEUE THAT STORES MINIMUM ELEMENTS AT THE TOP

  priority_queue<int, vector<int>, greater<int>> pql;

pql.push(7);
pql.push(1);
pql.push(5);
pql.push(3);
pql.emplace(8);

cout << pql.top() << " " << endl;

pql.pop();

cout << pql.top() << " " << endl;

  
}

int main(){
    explainPriorityQueue();
}