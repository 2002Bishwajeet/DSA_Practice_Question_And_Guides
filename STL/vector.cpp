#include<iostream>
#include<vector>
using namespace std;

//  This Is basic Example how to use and create Vector STL

//  Docs for Vector:  https://www.cplusplus.com/reference/vector/vector/?kw=vector

int main() {

    // Let's Talk about how to create a Vector  
    //  This is dynamic mtlb yeh acc to the need it can increase or decrease the size 
    /* 
        Let's Understand in this way 
        jaise jaise elements daale rhoge . agar compiler ne jo vector banaya tha  woh full ho gya
        but still you are adding an element , it creates a new vector of double the prev size 
        copies all the elements there , add your new element. Dumps the previous Vector and shows you the new vector
     */
    // This is how you declare the vector
    vector<int> v; // isme Size declare nhi kara cause its now imp

    //  But if you wanted to declare a vector with size and intial value


    vector<int> v1(5,1); // Yaha pe 5 is Size and 1 is the intial value of all 5 elements
    for(int i:v1) // For printint the v1 elements
    {
        cout<<i<<" ";
    }cout<<endl;

    vector<int> last(v1); // last is the var name . This is how to copy all the elements of one vector to another
     for(int i:last) // For printint the last elements
    {
        cout<<i<<" ";
    }cout<<endl;


    // Let's See its size for now currently . yaha Size for kitne elements currently
    cout<<"Size-> "<<v.size()<<endl;

    // This is how you push elements in vector
    v.push_back(1);
    cout<<"Size-> "<<v.size();

    // Let's see the capacity 
    cout<<"Capacity-> "<<v.capacity()<<endl;
 
    // Let's see how the size changes

   
    v.push_back(2);
   cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;


    //  Baaki jo jo operation kare the for array we can do the same in vector 

    //  Like,

    cout<<"Element at second index "<<v.at(2)<<endl;

    cout<<"Front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;


    cout<<"Before Pop" << endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    //  Will remove the last element
    v.pop_back();

    cout<<"After Pop"<<endl;

    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    //  Let's See the Size before and After Clearing the Vecotr
    cout<<"Before Clearing "<<v.size()<<endl;
    v.clear(); // Will Clear everything in the vector
    cout<<"After Clearing "<<v.size()<<endl;
    



    
    return 0;
}