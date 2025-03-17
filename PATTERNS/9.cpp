/*
       *
     * * *
    * * * * *                
   * * * * * * *
 * * * * * * * * *
 * * * * * * * * *
   * * * * * * *
     * * * * * 
       * * *
         *
*/


#include<bits/stdc++.h>
using namespace std;

void pattern7(int n){

    for(int i = 1; i<n; i++){

       //space         
        for(int j = 1; j <= n-i-1; j++){ 
            cout << " "; 
            }
        //star
         for(int j = 1; j <= i+i-1; j++){ //n-row+1
            cout << "*"; 
            }

        //space
         for(int j = 1; j <= n-i-1; j++){ 
            cout << " "; 
            }
        
        cout << endl;
    }
}

void pattern8(int n){

    for(int i = 1; i<n; i++){

       //space         
        for(int j = 1; j <= i; j++){ 
            cout << " "; 
            }
        //star
         for(int j = 1; j <= 2*n-2*i-1; j++){ //n-row+1
            cout << "*"; 
            }

        //space
         for(int j = 1; j <= i; j++){ 
            cout << " "; 
            }
            
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern7(n);
    pattern8(n);
}