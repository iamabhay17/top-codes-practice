#include <iostream>
using namespace std;

void capitalizeFirst(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 || i == s.length() - 1)
        {
            s[i] = toupper(s[i]);
        }
        if (s[i] == ' ')
        {
            s[i - 1] = toupper(s[i - 1]);
            s[i + 1] = toupper(s[i + 1]);
        }
    }
}

int main()
{
    string s = "abhay bhardwaj";
    capitalizeFirst(s);
    cout << s;
    return 0;
}