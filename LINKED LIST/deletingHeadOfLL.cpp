#include<bits/stdc++.h>
using namespace std;

struct Node
{
   public:
   int data;
   Node* next;

   public:
   Node(int data1, Node* next1)
   {
      data = data1;
      next = next1;
   }

   Node(int data1)
   {
     data = data1;
     next = nullptr;
   }
};

//transforming array into a linked list
Node* arraytoLL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++)
    {
         Node* temp = new Node(arr[i]);
         mover -> next = temp;
         mover = temp;
    }
    return head;
}

Node* deleteHead(Node* head)
{
    head = head -> next;

}

int main()
{
    vector<int> arr = {1,4,8,3,1,4,7};

}