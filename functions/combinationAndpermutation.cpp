#include<iostream>
using namespace std;
int fact(int x) {
    int val = 1;
    for(int i = 2; i <= x; i++){
        val *= i;
    }
    return val;
}
int combination(int n, int r) {
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int result = nfact / (rfact * nrfact);
}
int permutation(int n, int r){
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int result = nfact / nrfact;
}
int main() {

    //* combination formula : nCr = n! / r!(n-r!)
    //*permutation formula : nPr = n! / (n-r!)

    int n;
    cout<<"Enter n : ";
    cin>>n;

    int r;
    cout<<"Enter r : ";
    cin>>r;

    
    cout<<combination(n, r)<<endl;
    cout<<permutation(n, r);
     
}