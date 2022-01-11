#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return m * pow(m, n - 1);
    }
}

int main()
{
    cout<<pow(5,2);
    return 0;
}