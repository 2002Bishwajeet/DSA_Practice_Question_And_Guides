#include<iostream>
#include<algorithm>
#include<vector>

//  This program illustrates the use of STL algorithm 
using namespace std;

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    //  OFC binary search mein elements sorted hone chaiye

    cout<<binary_search(v.begin(),v.end(),1)<<endl; // This will do the binary search and search for the element jo likha hai

    cout<<"Upper Bound-> "<<upper_bound(v.begin(),v.end(),5) -v.begin()<<endl; // upper bound returns an iterator so it will
    //  give ki 5 upar se shuru kare toh kaha hai

    cout<<"Lower Bound-> "<<lower_bound(v.begin(),v.end(),5) -v.begin()<<endl; // same goes with lower bound it also return an 
    //  iterator and tell ki woh number jo de rkha hai woh kaha hai

    int a =5;
    int b =10;

    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    //  ek swap function hai
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string s = "hello";

    reverse(s.begin(),s.end()); //isme start and end iterator dena hoga string ka ya kisi bhi container function ka

    cout<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end()); //isme start dena hai middle(mtlb kitna rotate karna hai) and end kaha pe hai

    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end()); // its based on intro sort - combo of 3 algo (heap sort , insertion sort  and quick sort)

    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    
    return 0;
}