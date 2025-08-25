#include<iostream>
using namespace std;
void fun(int a, int b){
    cout<<"address of a inside the fun  : "<<&a<<endl;
    cout<<"address of b inside the fun : "<<&b<<endl;
}
int main() {
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;

    fun(a, b);

    cout<<"address of a  : "<<&a<<endl;
    cout<<"address of b  : "<<&b<<endl;
}