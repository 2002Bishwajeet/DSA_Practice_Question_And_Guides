#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumNaturalNumbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumNaturalNumbers(n - 1);
    }
}

int main()
{

   cout<< sumNaturalNumbers(5);

    return 0;
}