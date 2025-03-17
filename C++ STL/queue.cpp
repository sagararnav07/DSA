#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
   
   //QUEUE FOLLOWS FIFO
   queue<int> q;

    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4);  //{1,2,4}

    q.back() +=5; //add 5 + 4 = 9

    cout << q.front() << endl; //prints 1

    q.pop(); //pops out 1

    cout << q.front() << endl; //prints 2

   //AS STACK YOU CAN USE LIST, ARRAY AND VECTORS TO ENTER ELEMENTS IN THE QUEUE

}



int main(){

}