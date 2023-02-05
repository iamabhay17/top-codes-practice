// len of string without using strlen fn

#include <iostream>
using namespace std;

int lenStr(string s)
{
    int l = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    return l;
}

int main()
{
    string s;
    cin >> s;

    cout << "Length _ " << lenStr(s);
    return 0;
}