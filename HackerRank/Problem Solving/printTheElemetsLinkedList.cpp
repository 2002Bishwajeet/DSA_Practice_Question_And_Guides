#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *head = NULL;
    node *temp = NULL;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        temp = new node;
        temp->data = data;
        temp->next = head;
        head = temp;
    }
    for(temp = head; temp != NULL; temp = temp->next)
    {
        cout << temp->data << " ";
    }

    return 0;
}