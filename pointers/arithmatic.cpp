#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *ptr = &a;
    cout<<ptr<<endl;//0x61ff08

    ptr = ptr + 1;
    cout<<ptr<<endl;//0x61ff0c
    
    char ch = 'a';
    char *ptr2  = &ch;

    cout<<ptr2<<endl;
    ptr++;
    cout<<ptr2<<endl;

    int b = 10;
    int *ptr3 = &b;

    *ptr3 = *ptr3 + 1;
    cout<<*ptr3;
}