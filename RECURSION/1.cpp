#include<bits/stdc++.h>
using namespace std;

int counter = 0;
void f(){
if(counter == 4) return;
 cout << counter << " ";
 counter++;
 f();
  
}

int main(){
  f();
}