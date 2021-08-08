#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
using namespace std;

vector<string> topKFrequent(vector<string> &words, int k)
{
    unordered_map<string, int> m;
    for (auto &s : words)
        m[s]++;

    vector<string> res;

    //   To BE CONTINUED
}

int main()
{
    vector<string> words = {"i", "love", "leetcode", "i", "love", "coding"};
    vector<string> res = topKFrequent(words, 2);
    for (auto &s : res)
        cout << s << endl;
    return 0;
}
