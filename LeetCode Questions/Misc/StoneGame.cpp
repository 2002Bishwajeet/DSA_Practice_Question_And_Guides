#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool stonegame(vector<int> &piles)
{
    int n = piles.size();
    if (n <= 1)
        return true;
    vector<int> dp(n, 0);
    dp[0] = piles[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(piles[i], dp[i - 1] + piles[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        dp[i] = max(piles[i], dp[i + 1] + piles[i]);
    }
    return dp[0] > dp[n - 1];
}

int main()
{
    int n;
    cin >> n;
    vector<int> piles(n);
    for (int i = 0; i < n; i++)
    {
        cin >> piles[i];
    }
    if (stonegame(piles))
    {
        cout << "Alice";
    }
    else
    {
        cout << "Lee";
    }

    return 0;
}