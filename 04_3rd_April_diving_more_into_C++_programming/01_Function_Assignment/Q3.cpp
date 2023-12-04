#include <iostream>
typedef unsigned long long int ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10, b = 20;
    
    int *ptr = &a;
    b = *ptr + 1;
    ptr = &b;
    cout << *ptr <<" "<< a <<" "<< b;
          
 
    return 0;
}