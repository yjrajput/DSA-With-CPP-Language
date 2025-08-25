#include<iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;

    return;
}
int main() {
    int a;
    cout<<"Enter first number : ";
    cin>>a;

    int b;
    cout<<"Enter second number : ";
    cin>>b;

    swap(a, b);
    cout<<a<<" "<<b;
}