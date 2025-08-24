#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row numbers : ";
    cin>>m;

    int n;
    cout<<"Enter coulum number : ";
    cin>>n;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout<<" * ";
        } 
        cout<<endl;
    }

}