#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatentaion(vector<int> arr1)
{
    int n = arr1.size();
    for (int i = 0; i < n; i++)
    {
        arr1.push_back(arr1[i]);
    }

    return arr1;
}

int main()
{

    return 0;
}