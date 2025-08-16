#include<bits/stdc++.h>
using namespace std;


struct Node{
    
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
       data = data1;
       next = nullptr;
    }

};

//convert
Node* convertArrToLinkedList(vector<int> &arr) //can't return void or int as it cannot return entire linked list only the head
{
   Node* head = new Node(arr[0]);
   Node* mover = head;
   for(int i =1; i < arr.size(); i++)
   { 
    Node* temp = new Node(arr[i]);
    mover -> next = temp; //moving mover's next node to next node and storing it in temp
    mover = temp; //then assigning mover to temp;
   }
   return head;
}
 
int main(){
   vector<int> arr = {3,5,6,8,1};
   Node* head = convertArrToLinkedList(arr);
   Node* temp = head;
   //traversing
   while(temp){
        cout << temp->data << " ";
        temp = temp->next;
      }
}