// Given array which consists of only 0, 1 and 2. Sort the array without using any  algorithm

#include <bits/stdc++.h>
using namespace std;

void sortArr(vector<int> &vec, int size)
{
    int left = 0;
    int right = size - 1;
    int target = 0;

    while (target <= right)
    {
        switch (vec[target])
        {
        case 0:
        {
            swap(vec[left], vec[target]);
            left++;
            target++;
            break;
        }
        case 1:
        {
            target++;
            break;
        }
        case 2:
        {
            swap(vec[target], vec[right]);
            right--;
            break;
        }
        }
    }
}

int main()
{
    vector<int> vec = {1, 0, 2, 1, 0, 0, 1, 2, 0};
    int size = 9;

    sortArr(vec, size);

    for (auto i : vec)
    {
        cout << i << " ";
    }

    return 0;
}