#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

node *swapPairs(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    // Recusion used to swap the next node with the next node
    node *temp = head->next;
    head->next = swapPairs(temp->next);
    temp->next = head;
    return temp;
}

int main()
{

    return 0;
}