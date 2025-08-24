#include<iostream>
using namespace std;
int globalVarible = 1000;
void greet() {
    cout<<"global varible inside the greet function : "<<globalVarible<<endl;
}
int main() {
    //local scope -> between {} is called scope

    int localVarible = 100;
    cout<<"local inside the main function : "<<localVarible<<endl;

    cout<<"global varible inside the main function : "<<globalVarible<<endl;

    //function calling 
    greet();

    //change the value
    globalVarible = 20000;
    cout<<"global varible after the value change : "<<globalVarible<<endl;

    greet();

    int globalVarible = 5000;
    cout<<::globalVarible;
}