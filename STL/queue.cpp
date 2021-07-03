#include<iostream>
#include<queue>
using namespace std;

//  Docs: https://www.cplusplus.com/reference/queue/queue/?kw=queue
//  This Program shows how to use Queue STL

/* 
    Let's understand Queue
    so queue ko ek Line ke tarah treat karo
    let's say we are in a Line of Langar toh it follows the query of FIFO(First in First Out)
    sabse pehle jo aaya pehle usko khaana milega phir baad waale ko and so on

    This is exactly how this works in C++ too
    iteration bhi ese hi hogi
 */
int main() {

    // Let's see how to define a queue 
    queue<string> q;
    q.push("Adam"); // This is how you push elements in queue
    q.push("Eve");
    q.push("Jenny");
    
    //  Let's see ki top element konsa hai
    cout<<"First Element-> "<<q.front()<<endl;

    //  Let's see after Pop
    q.pop();
    cout<<"First Element Now-> "<<q.front()<<endl;

    //  let's See the Size now
    cout<<"Size Now-> "<<q.size()<<endl;

    return 0;
}