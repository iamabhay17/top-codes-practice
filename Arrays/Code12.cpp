// counting distinct element

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    int size = 11;

    map<int, int> mp;
    for (auto i : arr)
    {
        mp[i]++;
    }

    cout << mp.size();

    return 0;
}