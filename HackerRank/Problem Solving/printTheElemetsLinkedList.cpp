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
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        temp = new node; // a new node is allocated (hindi mein smjhe toh)
        //  tumne upar initialize toh kar diya but toh kya hua , you didn't allocate the memory
        //  so new node  dynamically allocated the memory assigned to you
        //  and yes that's how it's done
        temp->data = data;
        temp->next = head;
        head = temp;
    }
    for (temp = head; temp != NULL; temp = temp->next)
    {
        cout << temp->data << " ";
    }
    delete temp;

    return 0;
}