/* 

Q4: Find the output of the following code snippet.
int a = 15, b = 20;
int *ptr = &a;
int *ptr2 = &b;
*ptr = *ptr2;

ptr now points to b
ptr2 now points to a
a gets value of b
b gets value of a


*/

#include <iostream>
typedef unsigned long long int ll;
using namespace std;

int main() {

    // Q4: Find the output of the following code snippet.
    int a=15, b=20;
    int *ptr=&a;
    int *ptr2=&b;
    *ptr = *ptr2;

    cout<<*ptr<<" "<<*ptr2;

    // option 4 is correct b gets value of a 


 
    return 0;
}