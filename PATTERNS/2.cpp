#include<bits/stdc++.h>
using namespace std;

void pattern2(int n){
    for(int i = 2; i<n; i++){
        for(int j = 0; j < i-1; j++){
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