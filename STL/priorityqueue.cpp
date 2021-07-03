#include<iostream>
#include<queue>
using namespace std;

//  Docs: https://www.cplusplus.com/reference/queue/priority_queue/
//  This program illustrates the use of PriorityQueue STL

/* 
    Priority queue yeh hai ki jo sabse pehla element hoga woh humesha 
    greatest hoga . It relates to heap

    in short jitna bhi data daala ho jab nikalna shuru karoge toh sabse bada waala niklega (form of max heap)
    hum min heap jaisa bhi bana sakte hai
 */
int main() {
    // Let's see how to define them
    //  this is for max-heap
    priority_queue<int> maxi;

    // this is for min-heap
    priority_queue<int ,vector<int> , greater<int>> mini; // This is for creating heap in asc order
    
    maxi.push(1);
    maxi.push(10);
    maxi.push(6);
    maxi.push(13);
    maxi.push(4);

    //  explicitly declare isliye kara kyonki jab pop kar rhe hai toh size change ho rha hai aur woh hum na chahte
    int n = maxi.size();

    for(int i =0 ; i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    /* 
        This would be the output 
        13 10 6 4 1

        As you can see ki pura sorted ho gya so this is the advantage

    */

    //  Ab mini pe kaam karte hai

    mini.push(5);
    mini.push(0);
    mini.push(3);
    mini.push(1);
    mini.push(2);

    int m = mini.size();

     for(int i =0 ; i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    /* 
        this is the output of mini priority queue
        0 1 2 3 5

        As you can see humne isko sorted mil gya in asc order

    */

    // Let's check the size now 

    cout<<"Are you khaali-> "<<mini.empty()<<endl;
    
    return 0;
}