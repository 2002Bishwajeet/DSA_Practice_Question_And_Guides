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

//  Function for inorder traversal
//  In inorder Traversal we first visit the left subtree, then the root and then the right subtree

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//  Let's see how the above function works
/* 
        10
    20       30
           40    50

    Inorder(10)
            -> Inorder(20)
                     -> Inorder(NULL)
                     print(20)
                     -> Inorder(NULL)
            -> Print 10
            Inorder (30)
                    -> Inorder(40)
                             -> Inorder(NULL)
                             print(40)
                             -> Inorder(NULL)
                     Print(30)
                     Inorder(50)
                             -> Inorder(NULL)
                             print(50)
                             -> Inorder(NULL)
                    
            And That's how this recursive function works
 
  So the output of the abouve function is 20 10 40 30 50
 
  */

int main()
{

    return 0;
}