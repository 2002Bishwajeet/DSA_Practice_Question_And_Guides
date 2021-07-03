#include<iostream>
#include<stack>
using namespace std;

//  Docs: https://www.cplusplus.com/reference/stack/stack/?kw=stack
//  This shows the basic Work of Stack STL

/* 
    Let's Understand Stack First
    say there is a Pile of books or maybe even better example
    say we are in a marriage of someone (let's not say who)
    you are in the dining area now and you are ready to eat
    So you see there is a pile of plates -> let's say stack now
    you never go to take the bottom plate instead you always take the topmost plate
    that's how stack works in programming Life. It Follows the principle of LIFO(Last in First Out)
    you will traverse from the top most plate all the way to last one .
    WE can create our Own Stack but what's great we have STL library called stack which helps reduces the boilerplate 
    of creating one stack
 */


int main() {

    //  Let's See how to declare Stack
    //  This time we are creating a stack of String cause bahut Integer ho gya bhai
    stack<string> s;

    s.push("Namaste"); // This is how you push elements in a stack
    s.push("Hello");
    s.push("ola");

    // Let's check the top element now 

    cout<<"Top Element-> "<<s.top()<<endl;

    //  Let's See pop karne ke baad kya aata hai
        s.pop();
    cout<<"Top Element-> "<<s.top()<<endl;

    // Let's see the size of Stack
    cout<<"Size "<<s.size()<<endl;

    //  Let's see empty or not
    cout<<"Empty ?? "<<s.empty()<<endl;
    



    return 0;
}