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
    // Insertion at the end of the linked list
    node *head = NULL;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        node *temp = new node;
        temp->data = a[i];
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            node *temp1 = head;
            while (temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp;
        }
    }
    node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    return 0;
}
