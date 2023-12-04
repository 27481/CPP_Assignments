// Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;

int main() {

    int num1,num2;
    cout<<"Enter both the number :\n";
    cin>>num1>>num2;

    int *ptr1=&num1;
    int *ptr2=&num2;

    int res=(*ptr1)*(*ptr2);
    cout<<res<<" ";
      
 
    return 0;
}