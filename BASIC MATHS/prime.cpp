#include<bits/stdc++.h>
using namespace std;

void printPrime(int n)
{
        if( n % 1 == 0 && n % n == 0 )
        {
            cout << "True";
        }else{
            cout << "False";
        }
    
}

int main()
{
    int n;
    cin >> n;
    printPrime(n);
}