#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void FunA(int n);
void FunB(int n);

void FunA(int n)
{

    if (n > 0)
    {
        cout << n << " ";
        FunB(n - 1);
    }
}

void FunB(int n)
{
    if (n > 1)
    {
        cout << n << " ";
        FunA(n / 2);
    }
}

int main()
{
    FunA(20);
    return 0;
}