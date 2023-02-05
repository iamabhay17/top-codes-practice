// calculate length of a string using recursion

#include <iostream>
using namespace std;

int len(string a)
{
    if (a == "")
    {
        return 0;
    }
    return 1 + len(a.substr(1));
}
int main()
{
    string a;
    cin >> a;

    cout << len(a);

    return 0;
}