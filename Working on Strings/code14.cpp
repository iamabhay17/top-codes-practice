// calculate frq of string in array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    map<char, int> mp;

    for (auto i : str)
    {
        mp[i]++;
    }

    for (auto x : mp)
    {
        cout << x.first << ":" << x.second << endl;
    }
    return 0;
}