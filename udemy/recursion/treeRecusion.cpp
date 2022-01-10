#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  Number of calls made in the tree recursion
//  2^(n+1) -1  at every level
// Sum of GP series = 2^(n+1) -1

void treeRecursion(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    treeRecursion(n - 1);
    treeRecursion(n - 1);
}

int main()
{
    treeRecursion(3);
    return 0;
}