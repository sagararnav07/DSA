#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i, int arr[], int n)
 {
    if(i >= n/2){
        return;
    }
  
    swap(arr[i], arr[n-i-1]);
    reverseArray(i+1, arr, n);
 }

 int main(){
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array you want to reverse"<< " " << endl;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    reverseArray(0, arr, n);
    
    cout << "The reverse of the given array is:" << " " <<endl;
     for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }

    
   
    return 0;
 }