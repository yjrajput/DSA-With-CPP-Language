#include<iostream>
using namespace std;
int main() {
    //there are two types of typeconversion
    //implicit -> perform by the compailer
    //explicit -> perfrom by the user -> c-type, funtion type

    float num = 3.14444;
    int num1;

    num1 = num;
    cout<<num<<endl;
    cout<<num1<<endl;

    char ch = 'a';
    int a;

    a = ch;
    cout<<a<<endl;
    cout<<ch<<endl;

    //explicit -> typecasting
    float f = 3.1434;
    cout<<int(f)<<endl; //function style

    double dd = 7.9993249248324324;
    cout<<(int)dd<<endl;//c tyle
}