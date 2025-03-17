#include<bits/stdc++.h>
using namespace std;

//This answer is only for the numbers which are of 3 digits but if the numbers are more than 3 digits refer to armstron_ai.cpp
void Armstrong(int n)
{
   
   int A_no = 0;
   int dup = n;
   int num_digits = 0;

   
   int temp = n;
   while (temp > 0)
   {  //if n = 371
      int ln = temp % 10; //371 % 10 = 1 => ln = 1
      A_no = A_no + pow(ln,3); // A_no = 1^3 => A_no = 1  
      temp = temp / 10;  // n = 371 / 10 = 37 => n =37
      
   }
   cout << A_no; 
   
   if(A_no == dup)
   {
    cout << "True";
   }else{
    cout << "False";
   }
}
int main()
{
   int n;
   cout << "Enter you number to check if it's armstrong or not" << endl;
   cin >> n;
   Armstrong(n);

}