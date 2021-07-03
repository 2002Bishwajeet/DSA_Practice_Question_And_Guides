#include<iostream>
#include<set>
using namespace std;

// Docs: https://www.cplusplus.com/reference/set/set/
//  This program illustrates the use of sets

/* 
    Sets bas wahi normal waala set hai maths ka bas difference yahi hai ki 
    koi bhi repeated elements nhi honge
    Iske implementation BST ke through hua hai
    Aur yeh sorted order mein aata hai

    ek unordered set bhi hota hai jisme set bas sorted nhi hota as the name suggest baaki sab same
    and haan speed is faster in unordered_set than Set
 */
int main() {

    // Let's see how to declare set
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    for(auto i: s) // auto karo int karo auto dynamic hai bas
    {
        cout<<i<<" ";
    }cout<<endl;
    
    /* 
        this is the output
        3 4 5

        toh saari dupliacte elements removed and the set shown in sorted order

    */

    //  Let's do through iterator
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it); 
     for(auto i: s) 
    {
        cout<<i<<" ";
    }cout<<endl;

    /* 
        this is the output
        3  5

    */

    // let's check the count 

    cout<<"Let's see 5 present hai ya nhi "<<s.count(5)<<endl; // toh yeh count bool value deta hai

    set<int>::iterator itr = s.find(5); // yeh mujhe 5 ka iterator de dega agar ho toh

    cout<<"Value is present at itr "<<*it<<endl;

    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<endl;
    }cout<<endl;

    return 0;
}