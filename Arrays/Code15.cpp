// removing dupliacting elements

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 2, 1};
    set<int> s;
    for (auto i : arr)
    {
        s.insert(i);
    }
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}