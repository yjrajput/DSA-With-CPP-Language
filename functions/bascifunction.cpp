#include<iostream>
using namespace std;
void greeting(int n) {
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    

    //* function calling
    greeting(a);
    greeting(b);
    greeting(c);
    
    // for(int k = 1; k <= 3; k++){
    //     cin>>a;
    //     for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    // }
    
    // for(int i = 1; i <= b; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    // for(int i = 1; i <= c; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
}