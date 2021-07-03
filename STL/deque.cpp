#include<iostream>
#include<deque>
using namespace std;

// https://www.cplusplus.com/reference/deque/deque/?kw=deque  Docs for Deques

//  This is an basic example on how to use  Dequeue
//  Kuch log issue Deck (deque) bolte hai Doubly-ended queue bhi bolte hai

// Deque actually yeh hota hai ki
//  on the both front and back sides you can perform Push pop operation (insertion , Deletion)
// That's the funda
// It's dynamic , randomAccess bhi possible

int main() {

    // This is how you create a Deque
    deque<int> d;
    d.push_back(5); // This is how you add elements in back
    d.push_front(2); // This is how you add elements in front

    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    // //  This is how you pop elements from the back
    // d.pop_back(); 

    // // This is how you pop elements from the front
    // d.pop_front();

    // //  The output after pop
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;

    cout<<"Print First Index Element "<<d.at(1)<<endl; 

    //  let's print the elements on first and last index

    cout<<"First "<<d.front()<<endl;
    cout<<"Last "<<d.back()<<endl;

    // Let's Check its Empty or not

    cout<<"Empty or not ?? "<<d.empty()<<endl;

    //  So as you can see we can perform these types of stl functions which we performed in arrays or deques .
    //  so we can  conclude ki maximum  STL ke functions common hai 

    //  Let's erase the deque. Before that let's know the size
    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); // erase empty nhi ho sakta . you need to specify the range  ki kaha se kaha delete karein
    //  so in this case we are deleting from the begin till begin+1 (open brakcet hai yeh begin+1 waala)
    cout<<"After erase "<<d.size()<<endl;

    // Remeber jitni capacity pehle allocate ho gyi woh gyi woh change nhi hogi agar kuch remove karoge ya nhi
    // but add karoge size kam pad gya toh it will expand as required

    // Let's see abhi kya pada hai

    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    
    return 0;
}