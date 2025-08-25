#include<iostream>
using namespace std;
int main(){

    int num1 = 10;
    int num2 = 20;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    cout<<*ptr1<<" "<<*ptr2<<endl;

    int result = *ptr1 + *ptr2;
    cout<<result<<endl;

    //update value using pointer
    *ptr1 = 500;
    cout<<*ptr1;

}