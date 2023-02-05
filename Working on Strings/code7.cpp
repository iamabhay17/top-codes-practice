// remove vowel from string

#include <bits/stdc++.h>
using namespace std;

bool isVowel(int c)
{
    // converts to uppercase if it wasn't already
    c = toupper(c);

    // returns true if char matches any of below
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void removeVowel(string &s)
{
    string temp = "";
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!isVowel(s[i]))
        {
            temp += s[i];
        }
    }
    s = temp;
}

int main()
{
    string s;
    cin >> s;
    removeVowel(s);
    cout << s;
    return 0;
}