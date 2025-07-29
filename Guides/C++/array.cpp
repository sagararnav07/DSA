#include <bits/stdc++.h>
using namespace std;

int main(){
int arr[] = {3,6,2,6,8,7,9,9,3,2};

vector<int> vec = {2,3,4,5,6,7,7,8,8,8,7,5,4};


 auto upperBound = upper_bound(vec.begin(), vec.end(), 7);
 if(upperBound != vec.end()){
    cout << (vec.begin() - upperBound);
 }

}