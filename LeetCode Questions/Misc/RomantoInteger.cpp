#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int romantoInt(string s)
{
    // convert the given roman to integer
    int result = 0;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == 'I')
        {
            if (i + 1 < s.length() && s[i + 1] == 'V')
            {
                result += 4;
                i += 2;
            }
            else if (i + 1 < s.length() && s[i + 1] == 'X')
            {
                result += 9;
                i += 2;
            }
            else
            {
                result += 1;
                i++;
            }
        }
        else if (s[i] == 'X')
        {
            if (i + 1 < s.length() && s[i + 1] == 'L')
            {
                result += 40;
                i += 2;
            }
            else if (i + 1 < s.length() && s[i + 1] == 'C')
            {
                result += 90;
                i += 2;
            }
            else
            {
                result += 10;
                i++;
            }
        }
        else if (s[i] == 'C')
        {
            if (i + 1 < s.length() && s[i + 1] == 'D')
            {
                result += 400;
                i += 2;
            }
            else if (i + 1 < s.length() && s[i + 1] == 'M')
            {
                result += 900;
                i += 2;
            }
            else
            {
                result += 100;
                i++;
            }
        }
        else if (s[i] == 'V')
        {
            result += 5;
            i++;
        }
        else if (s[i] == 'L')
        {
            result += 50;
            i++;
        }
        else if (s[i] == 'D')
        {
            result += 500;
            i++;
        }
        else if (s[i] == 'M')
        {
            result += 1000;
            i++;
        }
    }
    return result;
}

int main()
{
    cout << romantoInt("III");

    return 0;
}