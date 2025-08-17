#include<bits/stdc++.h>
using namespace std;

//pass by reference :- changes original value, pass by value :- only creates a copy of the given value

void changeA(int b) //pass by value
{
    b =10;
}

// int main(){

//     int b =20;
//     changeA(b);
    
//     cout << b << endl; //ouput 10 

// }

// in above example value is changes but not the original value in memory remains the same it just creates a copy

void changeB(int* ptr) //pass by reference
{
    *ptr = 80;
}

// int main(){

//     int b =20;
//     changeB(&b);
    
//     cout << b << endl; //output 80

// }


//pass by reference using alias: like iron man and tony stark is same it is also same 
//here we pass an alias"another variable name" in the parameter with "&" changes original memory 
//location in different name 

void changeC(int &a) //pass by reference
{
    a = 100;
}

int main(){

    int b =20;
    changeC(b);
    
    cout << b << endl; //output 100

}