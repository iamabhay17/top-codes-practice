// toggle charcter in a string

#include <iostream>
using namespace std;

void toggle(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
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