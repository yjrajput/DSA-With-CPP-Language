#include<iostream>
using namespace std;

int fact (int x) {
    int fact = 1;
    for(int i = 2; i <= x; i++){
        fact *= i;
    }
    return fact;
}
int combination(int i, int j) {
    int ifact = fact(i);
    int jfact = fact(j);
    int ijfact = fact(i - j);

    int combination = ifact / (jfact * ijfact);
    return combination;
}

int main() {
    int n;
    cout<<"Enter rows : ";
    cin>>n;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}