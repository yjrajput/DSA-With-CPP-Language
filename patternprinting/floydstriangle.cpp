#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a rows : ";
    cin>>n;

    int k = 1;
    for(int i = 1; i <= n; i++){
        int count = 0;
        for(int j = 1; j <= i; j++){
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}