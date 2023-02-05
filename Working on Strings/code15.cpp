// check if two string are anagram

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2)
{
    map<char, int> mp;

    // mapping string 1 charcters
    for (auto i : s1)
    {
        mp[i]++;
    }
    // removing string 2 chracters
    for (auto i : s2)
    {
        mp[i]--;
    }

    for (auto x : mp)
    {
        if (x.second != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1, s2;
    cout << "enter string 1 :";
    cin >> s1;
    cout << "enter string 2 :";
    cin >> s2;

    isAnagram(s1, s2) ? cout << "Anagaram" : cout << "not anagram";

    return 0;
}