// remove brackets from a expression

#include <iostream>
using namespace std;

bool isBracket(char s)
{
    return s == '(' || s == '[' || s == '{' || s == ')' || s == '}' || s == ']';
}

void removeBrackets(string &s)
{
    string temp = "";
    for (auto x : s)
    {
        if (!isBracket(x))
        {
            temp += x;
        }
    }
    s = temp;
}

int main()
{
    string s;
    cin >> s;
    removeBrackets(s);
    cout << s;

    return 0;
}