#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node 
{
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

void inOrder(node *root)
{
    if(root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main() {
    
    return 0;
}