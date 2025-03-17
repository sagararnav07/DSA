#include<bits/stdc++.h>
using namespace std;

void count_digits(int n){

int last_digit;
int count = 0;

   if( n == 0 ){
    cout << "Total number of digits :  1" << endl;
   }
   else{

    while (n>0)
    {
        last_digit = n % 10;
        cout << last_digit << " " << endl; 
        n=n/10;
        count ++;
    }
     cout << "total number of digits:" << count << endl;
    
   }

}
int main(){
    int n;
    cout << "please enter the digits" << endl;
    cin >> n;
    count_digits(n);
}