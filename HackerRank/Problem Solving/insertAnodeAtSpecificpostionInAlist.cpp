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

int main()
{
    //  Insert a node at a specific position in a linked list
    //  Given a pointer to the head node of a linked list and an integer,
    node *head = NULL;
    int n, x, pos;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> pos;
        if (i == 0)
        {
            head = new node(x);
            node *temp = head;
            for (int j = 1; j < pos; j++)
            {
                temp->next = new node(x);
                temp = temp->next;
            }
            temp->next = new node(x);
        }
        else
        {
            node *temp = head;
            for (int j = 1; j < pos; j++)
            {
                temp = temp->next;
            }
            node *newNode = new node(x);
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}