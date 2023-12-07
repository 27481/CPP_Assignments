// Find the minimum value out of all elements in the array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1, 2, 3, 4, 5};
    int minn=INT_MAX;
    
    for (int i=0; i<5; i++)
        minn=min(minn,arr[i]);
    
    cout<<minn;

    return 0;
}