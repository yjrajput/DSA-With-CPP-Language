#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int sum = 0;

    // for(int i = 1; i <= n; i++){
    //     sum += i;
    // }
    // cout<<"sum of n natural number using for loop : "<<sum<<endl;

    // int i = 1;
    // while (i<=n)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // cout<<"sum of n natural number using while loop : "<<sum<<endl;

    int i = 1;
    do{
        sum += i;
        i++;
    }while(i<=10);
    cout<<sum;
    
}