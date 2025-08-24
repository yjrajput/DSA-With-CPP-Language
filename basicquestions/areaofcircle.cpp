#include<iostream>
#include<iomanip>
using namespace std;
int main () {
    float radius, result;
    cout<<"Enter redius of a circle : ";
    cin>>radius;

    result = 3.14 * (radius * radius);
    cout<<"Area of a circle : "<<result;
} 