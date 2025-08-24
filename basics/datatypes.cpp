#include<iostream>
using namespace std;
int main() {
    //there are two types of datatypes in cpp
    //premative datatypes -> int, char, flaot, boolean, double
    //userdefind datatypes -> function, array, pointer

    int a;
    cout<<"size of integer : "<<sizeof(a)<<" bytes"<<endl; //4

    char ch;
    cout<<"size of character : "<<sizeof(ch)<<" bytes"<<endl; //1

    float f;
    cout<<"size of floating point : "<<sizeof(f)<<" bytes"<<endl; //4

    bool b;
    cout<<"size of boolean : "<<sizeof(b)<<" bytes"<<endl; //1

    double d;
    cout<<"size of double : "<<sizeof(d)<<" bytes"<<endl; //8
}