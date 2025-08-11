#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:

    int data;  //data that will be stroed in the linked list
    Node* next; //Node* point to the next memory location
    
    public:

    Node(int data1, Node* next1){ //constructor
       data = data1; //initialising constructor
       next = next1; 
    } 
     

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
    int main()
    {
        vector<int> arr = {1,4,5,6,7,8,9};
        Node* y = new Node(arr[0]);
        cout << y->data;
    }
