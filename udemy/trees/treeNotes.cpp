//  Number of binary trees using N nodes
#include <iostream>
#include <bits/stdc++.h>
/*
T(n) = (2nCn/n+1) -> No of binary trees for unlabelled nodes
T(n) = (2nCn/n+1)*n! -> No. of binary trees for labelled nodes

When Height Given
Minimum Nodes n = h+1
Maximum Nodes n = 2^(h+1) -1

When Nodes Given
Minimum Heights = n-1 = h
Maximum Height = log(n+1) -1 = h

Notice dono formualaes ko ulte pulte karke hi ban gye
So remember one, derive the other


Number of Nodes of Degree zero = No. of Nodes of Degree 2 +1
This is always true in Binary Tree


**STRICT BINARY TREE**
A binary tree which has exactly 2 nodes or 0 nodes of a child. No 1 Node. Agar one
Node hua toh its not strict binary tree


Representation of Binary Trees
 2 Types
 Array Representation
 LinkedList Representation


ARRAY REPRESENTATION
Har order mein jo nodes hai woh array mein daalte jao
Element - I
LChild - 2*i
RChild - 2*i +1
Parent - [I/2]Floor function


 */

using namespace std;

int main()
{

    return 0;
}