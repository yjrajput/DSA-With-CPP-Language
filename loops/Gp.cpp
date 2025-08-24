#include<iostream>
using namespace std;
int main() {
    int nth;
    cout<<"Enter nth term of AP : ";
    cin>>nth;

    int a = 1;
    for(int i = 1; i <= nth; i++){
        cout<<a<<" ";
        a = a*2;
    }
}