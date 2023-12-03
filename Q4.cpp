#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// Write a function to count the number of digits in a number and then print the square of this number.


auto lambda=[](int n){
    int cnt=0;

    while(n>0){
        cnt++;
        n/=10;
    }
    cout<<cnt<<" "<<pow(cnt,2);
};

int main() {

    int n;
    cout<<"Enter the number whose No_of_digits and (square No_of_digits) :\n";
    cin>>n;

    lambda(n);
    
          
 
    return 0;
}