#include<bits/stdc++.h>
using namespace std;

// Write  a function to print squares of n natural numbers 

auto lambda=[](int n){
    return n*n;
};

int main() {
    int n;
    cout<<"Enter the number upto which you want to print square of natural number :\n";
    cin>>n;

    for(int i=0; i<=n; i++){
        cout<<lambda(i)<<" ";
    }
    
          
 
    return 0;
}