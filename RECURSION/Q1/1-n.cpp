//print 1 to n using recursion

#include<bits/stdc++.h>
using namespace std;

void print(int n) //one parameter 
{
    if(n == 0){ //base case to check the final
        return;
    }

    print(n - 1); //function call with each call decrementing "n"
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print(n);
}