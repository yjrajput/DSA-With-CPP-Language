#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    if(num == 0){
        cout<<"zero";
    }else if(num > 0){
        cout<<"positive number";
    }else{
        cout<<"negative number";
    }
}