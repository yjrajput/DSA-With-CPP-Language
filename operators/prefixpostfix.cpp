#include<iostream>
using namespace std;
int main() {
    //prefix

    int a = 10;
    cout<<a<<endl; //10

    ++a; //prefix
    cout<<a<<endl; //11
    cout<<++a<<endl; //12

    //postfix

    int b = 12;
    cout<<b<<endl;

    b++;
    cout<<b<<endl;
    cout<<b++<<endl;
}