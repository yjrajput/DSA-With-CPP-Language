#include<iostream>
using namespace std;
int hcf(int a, int b) {
    int hcf = 1;
    for(int i = min(a,b); i >= 0; i--){
        if(a%i == 0 && b%i == 0){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main() {
    int a;
    cout<<"Enter first number : ";
    cin>>a;

    int b;
    cout<<"Enter second number : ";
    cin>>b;

    cout<<hcf(a,b);
}