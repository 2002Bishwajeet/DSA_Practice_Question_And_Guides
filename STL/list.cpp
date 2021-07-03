#include<iostream>
#include<list>
using namespace std;

// Docs List: https://www.cplusplus.com/reference/list/list/?kw=list
//  This program illustrates the use of List 
//  This is not array waala List , this is made with concept of doubly LinkedList

//  Yaha pe jo function abhi tak use kare the woh nhi kar sakte . Hume Traverse karke jaana padega
//  cause the concept is doubly Linked List so traversing toh hogi hi . We don't know the address before hand
int main() {
    
    //  This is how you define a List .
    //  here it is a List of integer Type.
    // NOTE: This is not an Array . this is List is not an array but its a doubly LinkedList
    list<int> l;

    list<int> l1(l); // Wahi ki ek List dusre mein copy kar sakte hai

    list<int> l2(5,100);    // Ek List bana li jisme inital size declare kar liya and inital value of every index

    l.push_back(1); // Simple how to add elements in front 
    l.push_front(2); // Simple how to add elements in back

    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After Erase "<<endl;
    for(int i:l)
    cout<<i<<" ";
    cout<<endl;


    cout<<"Size of List "<<l.size();



    return 0;
}