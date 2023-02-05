// print string in reverse order

#include <bits/stdc++.h>
using namespace std;

void reverse(string &s)
{
    int len = s.length();
    string temp = "";
    for (auto i : s)
    {
        temp = i + temp;
    }
    s = temp;
}

int main()
{
    string s;
    cin >> s;
    reverse(s);
    cout << s;
    return 0;
}
