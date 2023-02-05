// Find the Union and Intersection of the two sorted arrays

#include <bits/stdc++.h>
using namespace std;

void unions(vector<int> a1, vector<int> a2)
{
    set<int> s;
    for (auto i : a1)
        s.insert(i);
    for (auto i : a2)
        s.insert(i);

    cout << "Union : ";
    for (auto i : s)
    {
        cout << i << " ";
    }
}
void intersect(vector<int> a1, vector<int> a2)
{
    map<int, int> mp;
    if (a1.size() < a2.size())
    {
        for (auto i : a1)
            mp[i]++;

        cout << "Intersect :";
        for (auto j : a2)
        {
            if (mp.find(j) == mp.end())
            {
                cout << j << " ";
            }
        }
    }
    else
    {
        for (auto i : a2)
            mp[i]++;

        cout << "Intersect :";
        for (auto j : a1)
        {
            if (mp.find(j) == mp.end())
            {
                cout << j << " ";
            }
        }
    }
}

int main()
{
    vector<int> a1 = {1, 2, 3, 4, 5, 6};
    vector<int> a2 = {1, 2, 3, 4};

    unions(a1, a2);
    intersect(a1, a2);

    return 0;
}