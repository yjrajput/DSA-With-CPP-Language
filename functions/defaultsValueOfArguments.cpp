#include<iostream>
using namespace std;
void Default(int a = 10, int b = 20){
    cout<<a + b;
}
int main()  {
    Default(5 , 4);
}