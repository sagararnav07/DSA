#include<bits/stdc++.h>
using namespace std;

bool palindromeString(int i, string &s)
{
   if(i >= s.size() / 2) 
   {
    return "true";
   }
   if(s[i] != s[s.size() - i -1]) 
   {
    return "false";
   }
   palindromeString(i+1,s); 
}

int main(){
    string s;
    cout << "enter the string to check if it's palindrome or not" << endl;
    cin >> s;

    cout << palindromeString(0,s);
}