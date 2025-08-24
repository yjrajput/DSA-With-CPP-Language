#include<iostream>
using namespace std;
int main() {
    float num = 9.4;

    int dec = num; //9

    
    if(dec < 0) dec = dec - 1;

    float result = num - dec;
    cout<<result;

}