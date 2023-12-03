#include <iostream>
typedef unsigned long long int ll;
using namespace std;


// Given two numbers a and b, write a function to print all odd numbers between them.

auto lambda =[](int a, int b){
    for(int i=a; i<b; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
};

int main() {
    int a,b;
    cout<<"Enter the range :\n";
    cin>>a>>b;

    lambda(a,b);
 
    return 0;
}