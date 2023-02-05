#include <bits/stdc++.h>
using namespace std;

void generateParenthesis(int n, int open, int close, string s, vector<string> &ans)
{
    if (open == n && close == n)
    {
        ans.push_back(s);
        return;
    }

    if (open < n)
    {
        generateParenthesis(n, open + 1, close, s + "{", ans);
    }

    if (close < open)
    {
        generateParenthesis(n, open, close + 1, s + "}", ans);
    }
}
int main()
{
    int n = 3;

    vector<string> ans;
    generateParenthesis(n, 0, 0, "", ans);

    for (auto s : ans)
    {
        cout << s << endl;
    }
    return 0;
}