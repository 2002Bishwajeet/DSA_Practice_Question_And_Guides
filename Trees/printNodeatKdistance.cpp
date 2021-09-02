#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printNodeatKdistance(node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->data << " ";
    else
    {
        printNodeatKdistance(root->left, k - 1);
        printNodeatKdistance(root->right, k - 1);
    }
}

int main()
{

    return 0;
}