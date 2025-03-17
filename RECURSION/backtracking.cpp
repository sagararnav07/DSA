//print 1 to n

#include<bits/stdc++.h>
using namespace std;

void backtracking(int i, int n)
{
   i = n;
   if(i < 1){
      return;
   }

   backtracking(i-1, n);
   cout << i << n ;
}

int main()
{   
    int i;
    int n;
    cin >> n; 
    cout << endl;
    backtracking(i,n);
}