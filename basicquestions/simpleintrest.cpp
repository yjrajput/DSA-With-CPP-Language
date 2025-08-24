#include<iostream>
using namespace std;
int main() {
    float price, rate, time, simpleIntrest, result;
    cin>> price>>rate>>time;

    result = (price * rate * time) /100;
    cout<<"simple intrest : "<<result;
}