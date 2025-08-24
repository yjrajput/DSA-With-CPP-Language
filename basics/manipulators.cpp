#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    //manipulators -> endl, dec,oct,hex, setbase(b), setw(w), setfill(c), setprecision(b)

    int num;
    cout<<"Enter a number : ";
    cin>>num;

    //dec, oct, hex
    cout<<"value of num in hexadecimal formate : "<<hex<<num<<endl;
    cout<<"value of num in octal format : "<<oct<<num<<endl;

    //setbase(b)
    cout<<"value of num in hexadecimal formate using setbase(b) : "<<setbase(16)<<num<<endl;
    cout<<"value of num in octal format using setbase(b): "<<setbase(8)<<num<<endl;

    //set(w), setfill()
    cout<<setw(10)<<setfill('#')<<num<<endl;

    float val = 3.1444444444;
    cout<<"val : "<<setprecision(2)<<val;
}