#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *head = nullptr;
    ListNode *cur = nullptr;
    int carry = 0;
    while (l1 || l2 || carry)
    {
        int val = carry;
        if (l1)
        {
            val += l1->val;
            l1 = l1->next;
        }
        if (l2)
        {
            val += l2->val;
            l2 = l2->next;
        }
        carry = val / 10;
        val %= 10;
        if (cur)
        {
            cur->next = new ListNode(val);
            cur = cur->next;
        }
        else
        {
            head = cur = new ListNode(val);
        }
    }
    return head;
}

int main()
{

    return 0;
}

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *h1 = l1;
        ListNode *h2 = l2;
        
        if(l1->val ==0 && l2->val == 0)
            return l1;
        
         long long int  num1 =0;
         long long int  num2 = 0;
        while(h1)
        {
            num1 = num1*10 + h1->val;
            h1 = h1->next;
        }
        while(h2)
        {
            num2 = num2*10 + h2->val;
            h2 = h2->next;
        }
         long long int  num3 =0 ;
         long long int  num4 = 0;
        while(num1>0)
        {
            num3 = num3*10 + num1%10;
            num1 = num1/10;
        }
         while(num2>0)
        {
            num4 = num4*10 + num2%10;
            num2 = num2/10;
        }
        
        long long int  ans = num3+num4;
        ListNode* newNode = nullptr;
        while(ans>0)
        {
            ListNode* temp = new ListNode(ans%10);
            // temp->next = newNode;
             ans = ans/10;
            if(newNode == NULL)
                newNode = temp;
           else
           {     ListNode *temp1 = newNode;
            while (temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp;
        }
        }
        
        return newNode;
        
    }
}; */
