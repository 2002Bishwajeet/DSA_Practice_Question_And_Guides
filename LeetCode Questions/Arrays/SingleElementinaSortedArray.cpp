#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            return nums[mid];
        else if (nums[mid] == nums[mid - 1])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return nums[l];
}

int main()
{

    return 0;
}