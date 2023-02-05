// disjoint array : none of elements are common bw both arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7};

    set<int> st;
    int flag = 1;

    for (auto i : arr)
    {
        st.insert(i);
    }

    for (int x : arr2)
    {
        if (st.find(x) != st.end())
        {
            flag = 0;
            break;
        }
    }

    flag ? cout << "Yees" : cout << "No";

    return 0;
}
