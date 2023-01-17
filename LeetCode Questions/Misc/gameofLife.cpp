#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void gameOfLife(vector<vector<int>> &board)
    {
        int m = board.size();
        if (m == 0)
            return;
        int n = board[0].size();
        if (n == 0)
            return;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
               
    }
};

int main()
{
    Solution s;
    vector<vector<int>> board = {{0, 1, 0}, {0, 0, 1}, {1, 1, 1}, {0, 0, 0}};
    s.gameOfLife(board);
    

    return 0;
}