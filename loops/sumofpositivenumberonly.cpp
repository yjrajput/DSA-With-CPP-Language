#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a positive number : ";
    cin>>n;

    int sum = 0;
    while (n >= 0)
    {
        sum += n;
        cout<<"Enter a positive number: ";
        cin>>n;
    }
    cout<<"sum : "<<sum;
    
}