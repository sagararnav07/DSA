#include<bits/stdc++.h>
using namespace std;

void pattern2(int n){
    for(int i = 1; i<n; i++){
        for(int j = 1; j <= n-i+1; j++){ //n-row+1
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