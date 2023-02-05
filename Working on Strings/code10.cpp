// remove spaces from string

#include <iostream>
using namespace std;

void removeSpace(string &s)
{
    string temp = "";
    for (auto i : s)
    {
        if (!iswspace(i))
            temp += i;
        else
            continue;
    }
    s = temp;
}

int main()
{
    string s = "Abhay bhardwaj";

    removeSpace(s);
    cout << s;

    return 0;
}