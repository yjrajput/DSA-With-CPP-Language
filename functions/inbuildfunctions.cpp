#include<iostream>
#include<math.h>
using namespace std;
int mini(int x, int y) {
    return min(x,y);
}
int maxOf(int x, int y) {
    return max(x, y);
}
float squareRoot(int x) {
    return sqrt(x);
}
int main() {
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;

    int miniOfTwoNumers = mini(x, y);
    cout<<miniOfTwoNumers<<endl;

    int maxOfTwoNumbers = maxOf(x, y);
    cout<<maxOfTwoNumbers<<endl;

    float squareRootOFNumber = squareRoot(x);
    cout<<squareRootOFNumber<<endl;
    cout<<squareRoot(x);

}