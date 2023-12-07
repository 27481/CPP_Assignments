#include <iostream>
typedef unsigned long long int ll;
using namespace std;

// Given the length and breadth of a rectangle, write a program to find whether numerically the area of
// the rectangle is greater than its perimeter.

int main() {

    int length,breadth;
    cin>>length>>breadth;

    auto area=length*breadth;
    auto perimeter=2*(length+breadth);

     area>perimeter ? cout<<"Area is greater than perimeter":cout<<" Perimeter is greater than area";

    
          
 
    return 0;
}