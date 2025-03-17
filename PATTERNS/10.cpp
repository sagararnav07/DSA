/*
     *
     * *
     * * *                
     * * * *
     * * * * *
     * * * *
     * * *
     * * 
     * 

*/


#include<bits/stdc++.h>
using namespace std;

void pattern2(int n){
    for(int i = 0; i<2*n-1; i++){
        int stars = i;
         if(i>n) stars =2*n-i;
        for(int j = 0; j <= stars; j++){ //n-row+1
       
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern2(n);
}