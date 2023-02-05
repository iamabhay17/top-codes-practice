// replacing substring in string

#include <bits/stdc++.h>
using namespace std;

void replace(string str, string sub, string rep)
{
    int n = str.find(sub);
    string temp = "";

    // initial step
    temp = temp + str.substr(0, n);
    temp = temp + rep;

    // end step
    int j = 0;
    for (int i = n; i < str.length(); i++)
    {
        if (str[i] != sub[j])
        {
            temp += str[i];
        }
        else
        {
            j++;
        }
    }

    // printing
    cout << temp;
}

int main()
{
    string str = "abhay", sub = "hay", rep = "bhardwaj";
    replace(str, sub, rep);
    return 0;
}