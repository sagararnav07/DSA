#include<bits/stdc++.h>
using namespace std;

void explainPair(){

//pair with 2 values
pair<int,int> p = {2,5};
cout << p.first << " " << p.second;

//pair with 3 values
pair<int,pair<int,int>> q = {1,{2,3}}; cout << endl;
cout << q.first << " " << q.second.first <<  " " << q.second.second;

//storing an array of pairs
pair<int,int> arr[] = {{2,3}, {4,5}, {7,8}, {8,9}, {7,7}}; cout<<endl;
cout << arr[1].second << " " << arr[4].first << " " << arr[2].second;
}

int main(){
    explainPair();
}