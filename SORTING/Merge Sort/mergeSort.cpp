#include<bits/stdc++.h>
using namespace std;


void merge(vector<int> &arr, int low, int mid, int high) //pass by refence
{
    vector<int> temp;  //passed by value
   //[low ... mid]
   //[mid+1 ... high]

   int left = low;
   int right = mid +1;

//It will compare the elements and store it in a temporary array called temp;
   while(left <= mid && right <= high)
   {
        if(arr[left] <= arr[right])
          {
             temp.push_back(arr[left]);
             left++;
          }else{
             temp.push_back(arr[right]);
             right ++;
          }
   }

//This will run when the code above meets false but there are still elements left in the array so it
// run to empty the array
   while(left <= mid)
   {
    temp.push_back(arr[left]);
             left++;
   }

   while(right <= high)
   {
     temp.push_back(arr[right]);
             right ++;
   }

//The given code will transfer the elements from the temp to the original array 
//and the numbers will align itself

 for(int i = low; i <= high; i++)
  {
   arr[i] = temp[i - low];
  }
}
void mergeSort(vector<int> &arr, int low, int high)//pass by reference  
{
   if(low == high)
   {
    return;
   }
   int mid = (low + high)/2;
   mergeSort(arr, low, mid);
   mergeSort(arr, mid+1, high);
   merge(arr, low, mid, high);


}

void mS(vector<int> &arr, int n)
{
    mergeSort(arr, 0, n-1);
}


int main() {
    int n;
    cout << "Enter the size of the array" << endl;;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter" <<" " << n << " " << "Elements:" << endl;
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout << endl;

    mS(arr, n); // Call merge sort

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


