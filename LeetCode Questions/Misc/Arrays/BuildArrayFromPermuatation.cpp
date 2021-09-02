#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int> &nums)
{

    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[nums[i]]);
    }

    //  For this solution the space complexity is O(n)

    return ans;
}

int main()
{

    return 0;
}