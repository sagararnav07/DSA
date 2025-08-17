#include<bits/stdc++.h>
using namespace std;


int main()
{
    //1. increment ++/ decrement -- :- when we increment a pointer then it does not increase the value by 1, it increases it's memory by 4 bytes which is the space for 1 integer and vice versa
    int a = 10;
    int* ptr = &a;
    cout << ptr << endl; //0x61ff08 +4 = 08+1 = 09, 09+1 = 0a, 0a +1 = 0b, 0b +1 =0c
    //in hexademical the values after 9 changes to a,b,c,d
    ptr ++;
    cout << ptr << endl; //0x61ff0c

    //2. add / subtract :- similar as increment decrement if we add a pointer by 3 then it will add 3*4= 12 bytes and vice versa
    ptr + 3; //12 bytes added
    cout << *ptr<< endl;

    int arr[4] = {1,2,3,4};
     int* ptr2;//100 bytes
     int* ptr3 = ptr2 + 2;//108 bytes
     cout <<"value is"<<" " << ptr3 - ptr2 << endl;//2 bytes
}