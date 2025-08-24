#include<iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;

    if(marks > 91){
        cout<<"Excellent";
    }else {
        if(marks >= 81 && marks < 91){
            cout<<"very good";
        }else{
            if(marks >= 71 && marks < 81){
                cout<<"Good";
            }else{
                if(marks >= 61 && marks < 71){
                    cout<<"cna do better";
                }else{
                    if(marks >= 51 && marks < 61){
                        cout<<"Average";
                    }else{
                        if(marks >= 41 && marks < 51){
                            cout<<"bellow average";
                        }else {
                            if(marks < 33){
                                cout<<"fail";
                            }
                        }
                    }
                }
            }
        }
    }
}