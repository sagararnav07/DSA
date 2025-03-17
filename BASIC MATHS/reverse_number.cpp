#include<bits/stdc++.h>
using namespace std;

// void revrese_number(int n)
// {
//     int reverse_number;
//     if (n == 0)
//     {
//         cout << "the reverse is : 0" << " " << endl;
//     }else{
      
//       while (n > 0)
//       {
//         reverse_number = n % 10;
//         cout << reverse_number;
//         n = n/10;
//       }
     
//     }
    
// }
// int main(){
//     int n;
//     cout << "enter the digits:" << endl;
//     cin >> n;
//     revrese_number(n);
// }



//OR 

void reverse_number(int n){
    
    int
     rev_N = 0;
    int last_digit;
      while (n > 0)
      {
        last_digit  = n % 10;
        n = n/10;
        rev_N = (rev_N * 10) + last_digit;
        
      }
      cout << "the reverse number is : " <<  rev_N << endl;
     

}

 int main(){
    int n;
    cout << "enter the digits:" << endl;
    cin >> n;
    reverse_number(n);
}


