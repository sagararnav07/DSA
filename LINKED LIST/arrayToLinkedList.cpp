#include<bits/stdc++.h>
using namespace std;


struct Node {

    public: 
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public: 
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArrToLinkedList(vector<int> &arr) //can't return void or int as it cannot return entire linked list only the head
{
   Node* head = new Node(arr[0]);
   Node* mover = head;
   for(int i =1; i < arr.size(); i++)
   {
    Node* temp = new Node(arr[i]);
    mover -> next = temp;
   }
   return head;
}

int main(){
    vector<int> arr = {2,5,6,7};
    Node* head = convertArrToLinkedList(arr);
    cout << head->data << endl;
    cout << "converting array to linked list" << endl;
}