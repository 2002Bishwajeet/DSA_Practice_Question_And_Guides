#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            int i = mid;
            while (i >= 0 && nums[i] == target)
                i--;

            int j = mid;
            while (j < n && nums[j] == target)
                j++;

            ans.push_back(i + 1);
            ans.push_back(j - 1);
            return ans;
        }
        else if (nums[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}

int main()
{

    return 0;
}