// check if a string is palindrome or not

#include <bits/stdc++.h>
using namespace std;

void isPalin(string s, int len)
{
    int low = 0;
    int high = len - 1;
    while (low <= high)
    {
        if (s[low] == s[high])
        {
            low++;
            high--;
        }
        else
        {
            cout << "NOt palindrome";
            return;
        }
    }
    cout << "Palindrome";
    return;
}

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    isPalin(s, len);
    return 0;
}
