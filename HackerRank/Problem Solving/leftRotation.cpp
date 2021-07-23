#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> rotation(vector<int> v, int k)
{
    int n = v.size();
    vector<int> v1(n);
    /* 
    suppose this is an array [1,2,3,4,5]
    now we have to rotate it to left by the number given by k

    say if k = 2
    then we have to rotate it to left by 2
    array would be [3,4,5,1,2]
     */
    for (int i = 0; i < n; i++)
    {
        v1[i] = v[(i + k) % n];
    }
    return v1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = rotation(v, n);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}