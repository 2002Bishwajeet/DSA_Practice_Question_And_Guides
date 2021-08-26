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

// Function for preorder traversal
//  In Preorder traversal root node is visited first, then left subtree and then right subtree
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

/* 
        10
    20      30
         40    50

The Output will be 
10 20 30 40 50
First left tree is visited, then root, then right tree
This is how the recursive calls are made 
     preorder(10)
            - print 10
            - preorder(20)
                   -print 20
                   - preorder(NULL)
                   -preorder(NULL) -> no branches in left right sor returns to base condition
            preorder(30)
            -print 30
               -preorder(40)
                    - print 40
                    - preorder(NULL)
                    -preorder(NULL) 
               -preorder(50)
                     - print 50
                     - preorder(NULL)
                     -preorder(NULL)

 */

int main()
{

    return 0;
}