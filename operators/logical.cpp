#include<iostream>
using namespace std;
int main() {
    //AND(&&), OR(||), NOT(!)

    //AND -> return true if both expressions are true
    //OR => return true if altreal one expression are true
    //NOT -> return true if expression are flase

    cout<<(3 < 5 && 5 == 5)<<endl; //1
    cout<<(5 == 3 && 3 > 5)<<endl; //0
    cout<<(3 != 5 && 5 < 3)<<endl; //0
    cout<<(3 > 5 && 3 == 3)<<endl; //0


    cout<<(3 > 5 || 5 == 5)<<endl; //1
    cout<<(5 == 3 || 3 > 5)<<endl; //0
    cout<<(3 != 5 || 5 < 3)<<endl; //1
    cout<<(3 > 5  ||3 == 3)<<endl; //1

    cout<<!(3 != 5)<<endl; //0
}