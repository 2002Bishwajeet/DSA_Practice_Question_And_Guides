#include<iostream>
#include<array>
using namespace std;

//  This Is basic Example how to use and create Array STl

//  Docs for array:  https://www.cplusplus.com/reference/array/array/?kw=array

int main() {
   
    // This is the basic implementation of creating an Array
   int basic[5] = {1,2,3,4,5};

    //  This is how can you create array using STL. dont read the hints from extension. Quite Confusing
    //  pehle type leta hai dusra size phir var name . iske aage aur bhi hai buy not needed
    //  This is Static Array BTW. Hume initally size batani padegi ki kitni size ki hogi
    array<int,5> ar = {1,2,3,4,5};

    //  ese kuch functions hote hai jisse kuch kaam kar sakte hai . Like here we found out the size.
    int size = ar.size();
    //  Normal loop for finding the array
    for (int i = 0; i < size; i++)
    {
        cout<<ar[i]<<endl;
    }

    //  Let's See some more functions

    //  Yeh Tereko 3 element pe index dega 
    cout<<"Element at 3rd Index "<<ar.at(3)<<endl;

    //  yeh tereko boolean value dega ki empty hai ya nhi
    cout<<"Element Empty or not"<<ar.empty()<<endl; 

    cout<<"First Element "<<ar.front()<<endl; // As the Line Says
    cout<<"last Element "<<ar.back()<<endl; // As the Line Says
   
    return 0;
}