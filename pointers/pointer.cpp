#include<iostream>
using namespace std;
int main() {
    //pointers are used for storing the address of varible

    int a = 10;
    int *ptr = &a;
    cout<<&a<<endl;
    cout<<&ptr<<endl;

    float f = 4.9;
    float *ptrf = &f;
    cout<<ptrf<<endl;

    char ch = 'a';
    char *chptr = &ch;
    cout<<chptr<<endl;

}