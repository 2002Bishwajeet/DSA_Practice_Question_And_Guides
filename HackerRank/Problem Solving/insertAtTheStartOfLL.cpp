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
    //  insertiona at the beginning of LL
    int n;
    cin >> n;
    int ar[n];
    node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        node *temp = new node(ar[i]);
        temp->next = head;
        head = temp;
    }
    //  display the data in the LL
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    delete temp;
    delete head;

    return 0;
}