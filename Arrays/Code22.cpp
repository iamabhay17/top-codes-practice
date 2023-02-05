// replace index data by its rank in array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {100, 1, 9, 0, 90};
    int size = 5;
    map<int, int> mp;

    for (int i = 0; i < size; i++)
    {
        mp[arr[i]] = i;
    }

    int rank = 1;
    for (auto j : mp)
    {
        arr[j.second] = rank;
        rank++;
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}