#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter row numbers : ";
    cin>>n;

    int m;
    cout<<"Enter coloum number : ";
    cin>>m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout<<char(j + 64)<<" ";
        }
        cout<<endl;
    }
}