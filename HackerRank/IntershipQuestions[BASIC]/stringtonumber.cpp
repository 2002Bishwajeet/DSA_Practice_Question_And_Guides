#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'getPhoneNumber' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string getPhoneNumber(string s)
{
    vector<string> allStringNums{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> operations{"double", "triple"};

    string number;
    string phonenumber = "";
    int op = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (i == s.length() - 1)
        {
            number.push_back(s.at(i));
        }
        if (isspace(s[i]) || i == s.length() - 1)
        {
            cout << number << endl;
            auto it = find(allStringNums.begin(), allStringNums.end(), number);

            if (it != allStringNums.end())
            {
                if (op > 0)
                {

                    for (int j = 0; j < op; j++)
                    {
                        phonenumber += to_string(it - allStringNums.begin());
                    }

                    op = 0;
                }
                else
                {
                    phonenumber += to_string(it - allStringNums.begin());
                }
            }
            else
            {
                it = find(operations.begin(), operations.end(), number);
                if (it != operations.end())
                {
                    op = (it - operations.begin()) + 2;
                }
                cout << it - operations.begin() << " " << op << endl;
            }

            number = "";
        }
        else
        {
            number.push_back(s.at(i));
        }
    }
    cout << phonenumber << endl;

    return phonenumber;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s = "one two three double six eight nine";

    string result = getPhoneNumber(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
