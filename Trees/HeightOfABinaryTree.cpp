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

//  Function to find height of a binary tree
int heightOfBinaryTree(node *root)
{
    if (root == NULL)
        return 0;
    else
        return max(heightOfBinaryTree(root->left), heightOfBinaryTree(root->right)) + 1;
}

int main()
{

    return 0;
}