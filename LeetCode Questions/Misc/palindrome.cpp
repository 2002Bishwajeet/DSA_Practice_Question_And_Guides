#include<iostream>
using namespace std;

bool isPalindrome(int x) {
    int m=0;
    int temp =x;

    if(x<0)
    return false;
/* 
    Let's Break how this will work
    lets say a number 121

    121 not equal to zero

    m = 0*10 + 121%10 that is 1
    so m = 1 
    and x = 12

    Loop started again 
    m = 10 + 2
    m = 12
    and x= 1
    m= 120 + 1
    m = 121
    and x = 0


 */

    while (x)
    {
        m = m*10 + x%10;
        // cout<<m<<endl;
        x=x/10;
        // cout<<x<<endl;
    }

    if(temp==m)
    return 1;
  
  return 0;
    
}

int main() {
    int n;
    cin>>n;
    cout<<isPalindrome(n);
    return 0;
}