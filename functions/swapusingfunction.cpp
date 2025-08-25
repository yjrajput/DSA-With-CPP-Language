#include<iostream>
using namespace std;
void temp(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

   temp(a,b);
   cout<<a<<" "<<b;

}