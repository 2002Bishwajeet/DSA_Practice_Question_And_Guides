#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

//  THis solution does not cover all test cases

double pow(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n > 0)
    {
        return x * pow(x, n - 1);
    }
    else
    {
        return 1 / pow(x, -n);
    }
}

int main()
{
    double x;
    int n;
    cin >> x >> n;
    cout << pow(x, n);

    return 0;
}