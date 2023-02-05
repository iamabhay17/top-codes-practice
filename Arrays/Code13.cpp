// counting duplicating elements in array;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 67, 6, 5, 4, 3, 2, 1};
    map<int, int> mp;
    for (auto i : arr)
    {
        mp[i]++;
    }

    for (auto x : mp)
    {
        if (x.second > 1)
        {
            cout << x.first << " ";
        }
    }

    return 0;
}