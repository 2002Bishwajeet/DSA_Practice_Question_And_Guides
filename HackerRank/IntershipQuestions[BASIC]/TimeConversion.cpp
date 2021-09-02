#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s)
{
    string ans = "";
    int hh = stoi(s.substr(0, 2));
    int mm = stoi(s.substr(3, 2));
    int ss = stoi(s.substr(6, 2));
    string ampm = s.substr(8, 2);
    if (ampm == "PM")
    {
        if (hh != 12)
            hh += 12;
    }
    else
    {
        if (hh == 12)
            hh = 0;
    }
  if(hh<10)
  {
    ans+="0";
  }
  ans+=to_string(hh);
  ans+=":";
  if(mm<10)
  {
    ans+="0";
  }
  ans+=to_string(mm);
  ans+=":";
  if(ss<10)
  {
    ans+="0";
  }
  ans+=to_string(ss);
//    cout << ans;
  return ans;
    // else if (ss < 10 && mm < 10)
    //     ans = to_string(hh) + ":0" + to_string(mm) + ":0" + to_string(ss);
    // else if (mm < 10)
    //     ans = to_string(hh) + ":0" + to_string(mm) + ":" + to_string(ss);
    // else if (ss < 10)
    //     ans = to_string(hh) + ":" + to_string(mm) + ":0" + to_string(ss);

    // else
    //     ans = to_string(hh) + ":" + to_string(mm) + ":" + to_string(ss);
   
    
}

int main()
{
    timeConversion("12:12:00AM");
    return 0;
}