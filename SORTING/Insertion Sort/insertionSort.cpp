#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 0; i <= n-1; i++)
    {
        int j = i;

        while(j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main()
 {
    
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array to be sorted" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    insertionSort(arr, n);
    
    cout << "The sorted array is:" << endl ;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
  
  return 0;
 }