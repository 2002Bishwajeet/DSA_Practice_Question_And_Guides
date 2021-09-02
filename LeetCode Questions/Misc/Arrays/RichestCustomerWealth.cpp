#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int max = 0;
    for (int i = 0; i < accounts.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < accounts[i].size(); j++)
        {
            sum += accounts[i][j];
        }
        if (sum > max)
            max = sum;
    }
    return max;
    //  The time complexity of the above solution is O(n^2).
}

int main()
{

    return 0;
}