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

//  Function for post order traversal of tree
//  In Post Order, we visit the left subtree, then the right subtree and then the root
void postOrder(node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

/* 
        10
       /  \
     20   30
        /   \
        40  50

    The output will be 20 40 50 30 10

 */

int main()
{

    return 0;
}