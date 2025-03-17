#include<bits/stdc++.h>
using namespace std;


void reverse_number(int n){
    
    int rev_N = 0;
    int last_digit;
    int dup = n;
      while (n > 0)
      {
        last_digit  = n % 10;
        n = n/10;
        rev_N = (rev_N * 10) + last_digit;
        
      }
      if (rev_N == dup)
      {
        cout << "True" << endl;
      }else
      {
        cout << "False" << endl;
      }
      
      
     

}

 int main(){
    int n;
    cout << "enter the digits:" << endl;
    cin >> n;
    reverse_number(n);
}


