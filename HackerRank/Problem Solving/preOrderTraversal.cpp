#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{ // A utility struct for each node of the tree
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void preOrder(node *root)
{ // A recursive function to print Preorder traversal of the tree
    if(root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    } 
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left->left = new node(8);
    root->left->left->right = new node(9);
    root->left->right->left = new node(10);

    // Printing the tree in preorder traversal
    cout << "Preorder traversal of the binary tree is ";
    preOrder(root);
    cout << endl;


    return 0;
}