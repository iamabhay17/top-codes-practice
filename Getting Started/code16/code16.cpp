// fibonacci series upto nth tern

#include <bits/stdc++.h>
using namespace std;

int fibn(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibn(n - 1) + fibn(n - 2);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        cout << fibn(i) << " ";
    }

    return 0;
}