// count number of vowel

#include <bits/stdc++.h>
using namespace std;

bool isVowel(int c)
{
    // converts to uppercase if it wasn't already
    c = toupper(c);

    // returns true if char matches any of below
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void toggle(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isVowel(s[i]))
            cout << s[i] << endl;
    }
}

int main()
{
    string s;
    cin >> s;
    toggle(s);
    return 0;
}