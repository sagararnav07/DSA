#include<bits/stdc++.h>

//Bubble Sort
using namespace std;

void bubbleSort(int arr[], int n)
  {
   for(int i = n-1 ; i >= 0 ; i--){
    int didSwap = 0;
    for (int j = 0; j <= i - 1; j++){
        if(arr[j] > arr[j+1]){
           int temp = arr[j+1];
           arr[j+1] = arr[j];
           arr[j] = temp;
           int didSwap = 1;
        }
        if(didSwap == 0){
          break;
        }
      }
    }
  }
//12873

int main()
{
  int n;
  cout << "Enter the size of the array" << endl;
  cin >> n;

  int arr[n];
  cout << "Enter the elements of size" <<" " << n <<" " <<"array" <<endl; 
  for(int i = 0; i < n; i++)
  {
     cin >> arr[i];
  }

  bubbleSort(arr, n);
  cout << "The sorted array is:" << endl;
  for(int i = 0; i < n; i++)
  {
     cout << arr[i] << " ";   
  }
 
 return 0;
}