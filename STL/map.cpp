#include<iostream>
#include<map>
using namespace std;


//  Docs: https://www.cplusplus.com/reference/map/map/?kw=map
//  This program illustrates how to use Map and explore some of its features

/* 
    Map ek esa Data Structure hai jisme koi bhi data key value ke form mein store hota hai
    that key is unique and data kuch bhi ho sakta hai
    like if there is a string "hello" toh uske saath ek key bhi attached hogi
    like  1 : "Hello" ese kuch . key zaroori nhi ki int ho kuch bhi ho sakta hai bas unique hona chaiye
 */
int main() {

    //  This is how to define a map
    map<int,string> m;
    
    //  this is how you input the vales in map in c++
    m[1] = "Hello";
    m[5] = "Chle jaa yaha se";
    m[2] = "World";

    //  Ese bhi insert kar sakte hai . Agar tune Dart use kari hai toh you will notice ki { } for maps and [ ] for List(arrays)
    m.insert( { 15,"Raju" } );

    for(auto i:m)
    {
        cout<<i.first<<" " <<i.second<<endl;  // First function prints the first map ka element that is key and second 
                                              // element prints the string  
    }cout<<endl;

    /* 
        this is the output
        1 Hello
        2 World
        5 Chle jaa yaha se
        15 Raju
        As you can see tumhe yeh map sorted order mein print hote hue dikhenge but agar tumhe yeh nhi chaiye
        toh unordered_map use kar sakte hai , 
    */

    //  Let's use the find operation ki koi key element present hai ya nhi

    cout<<"Finding 5-> "<<m.count(5)<<endl; //coubt gives the boolean value
      cout<<"Finding 6-> "<<m.count(6)<<endl; //coubt gives the boolean value


    //    Let's Check the erase Function

    m.erase(15); // isme sirf key dena hai and woh delete ho jaega

      for(auto i:m)
    {
        cout<<i.first<<" " <<i.second<<endl;  

    }cout<<endl;

    auto itr = m.find(5); // Gives a iterator

    ////  For some reasons this  is giving me SIGTERM that is timeout ho jaa rha hai. Ab Reason nhi pata
    ////  okay so Reason yeh tha ki for loop ki condition galat lagi thi so ignore these comments

    for(auto i = itr ; i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }



    return 0;
}