// Largest Sum Contigous SubArray code in C++

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec = {-2, -3, 4, -1, -2, 1, 5, -3};
    int currSum = 0;
    int maxSum = INT_MIN;

    for (auto i : vec)
    {
        currSum += i;
        maxSum = max(maxSum, currSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxSum << " ";
    return 0;
}