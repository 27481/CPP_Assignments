// Write a function to take the radius of a circle as an argument and return its area.
#include <iostream>
typedef unsigned long long int ll;
using namespace std;


auto lambda=[](int radius){
    return 3.14*radius*radius;
};

int main() {

    int radius;
    cout<<"Enter the radius of the circle whose area you want to print :\n";
    cin>>radius;

    auto res=lambda(radius);
    cout<<"The area of the circle is => "<<res;
 
    return 0;
}