#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int n;
   cout << "enter the size of the array" << endl;
   cin >> n;
  
   int arr[n];
   cout << "enter the numbers in the array" << endl;
   for(int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

//precompute

map<int, int> mpp;
for(int i = 0; i <n; i++)
{
   mpp[arr[i]]++;   
}

  int q;
  cin >> q;
  while(q--)
  {
    int number;
    cout << "enter the number you want to count" << endl;
    cin >> number;
    //fetch
    cout << "the number of times" << " " << number << " " << "is present is:" << endl;
    cout << mpp[number] << endl;
 }

 return 0;


}