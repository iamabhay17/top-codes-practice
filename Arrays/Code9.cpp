// freq. of an element

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 6, 5, 3, 2, 4, 2, 1, 2};
    int size = 15;
    unordered_map<int, int> mp;
    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }
    for (auto x : mp)
    {
        cout << x.first << ":" << x.second << endl;
    }
    return 0;
}