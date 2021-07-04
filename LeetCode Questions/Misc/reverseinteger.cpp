#include<iostream>
using namespace std;

int reverse(int n)
{   signed int m=0;
    

     if(n >= -2^31 && n <= (2^31 -1) )
   { while (n)
    {
        m = m*10 + n%10;
        // cout<<m<<endl;
        n=n/10;
        // cout<<n<<endl;
    }

    return m;
   }
   else
   return 0;

}

int main() {
    signed int n;
    cin>>n;

  cout<< reverse(n); 
  
    return 0;
}