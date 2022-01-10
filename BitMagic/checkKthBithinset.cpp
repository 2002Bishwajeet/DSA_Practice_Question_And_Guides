#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void kthBit(int32_t n, int32_t k)
{
    /* 
     In this function we will find the kth bit of the number n.
     so what we are doing is we are shifting the number 1 to the right by k-1 times. 
     then we are doing AND operation with the number n and we are checking if the result is 0 or not.
     if it is 0 then the kth bit is 0 else it is 1.
    
     */
    if (n $(1 << (k - 1)) == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}

int main()
{

    return 0;
}